#include "MyViewExtension.h"
#include "StencilPostPrShader.h"

#include "PixelShaderUtils.h"
#include "PostProcess/PostProcessing.h"
#include "HologramShader.h"
#include "Materials/MaterialRenderProxy.h"

// Yoinked from Engine\Plugins\Experimental\ColorCorrectRegions\Source\ColorCorrectRegions\Private\ColorCorrectRegionsSceneViewExtension.cpp
// This is how it appears in Unreal 5.0.3 - in UE4 it uses FVector2D instead of FVector2f but is otherwise identical
FScreenPassTextureViewportParameters GetTextureViewportParameters(const FScreenPassTextureViewport& InViewport) {
	const FVector2f Extent(InViewport.Extent);
	const FVector2f ViewportMin(InViewport.Rect.Min.X, InViewport.Rect.Min.Y);
	const FVector2f ViewportMax(InViewport.Rect.Max.X, InViewport.Rect.Max.Y);
	const FVector2f ViewportSize = ViewportMax - ViewportMin;

	FScreenPassTextureViewportParameters Parameters;

	if (!InViewport.IsEmpty()) {
		Parameters.Extent = FVector2f(Extent);
		Parameters.ExtentInverse = FVector2f(1.0f / Extent.X, 1.0f / Extent.Y);

		Parameters.ScreenPosToViewportScale = FVector2f(0.5f, -0.5f) * ViewportSize;	
		Parameters.ScreenPosToViewportBias = (0.5f * ViewportSize) + ViewportMin;	

		Parameters.ViewportMin = InViewport.Rect.Min;
		Parameters.ViewportMax = InViewport.Rect.Max;

		Parameters.ViewportSize = ViewportSize;
		Parameters.ViewportSizeInverse = FVector2f(1.0f / Parameters.ViewportSize.X, 1.0f / Parameters.ViewportSize.Y);

		Parameters.UVViewportMin = ViewportMin * Parameters.ExtentInverse;
		Parameters.UVViewportMax = ViewportMax * Parameters.ExtentInverse;

		Parameters.UVViewportSize = Parameters.UVViewportMax - Parameters.UVViewportMin;
		Parameters.UVViewportSizeInverse = FVector2f(1.0f / Parameters.UVViewportSize.X, 1.0f / Parameters.UVViewportSize.Y);

		Parameters.UVViewportBilinearMin = Parameters.UVViewportMin + 0.5f * Parameters.ExtentInverse;
		Parameters.UVViewportBilinearMax = Parameters.UVViewportMax - 0.5f * Parameters.ExtentInverse;
	}

	return Parameters;
}


FMyViewExtension::FMyViewExtension(const FAutoRegister& AutoRegister, FLinearColor CustomColor) : FSceneViewExtensionBase(AutoRegister) {
	HighlightColor = CustomColor;
}

void FMyViewExtension::PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) {
	if ((*Inputs.SceneTextures)->CustomDepthTexture->Desc.Format != PF_DepthStencil) return; // This check was only necessary in UE5 - see below

	checkSlow(View.bIsViewInfo); // can't do dynamic_cast because FViewInfo doesn't have any virtual functions.
	const FIntRect Viewport = static_cast<const FViewInfo&>(View).ViewRect;
	FScreenPassTexture SceneColor((*Inputs.SceneTextures)->SceneColorTexture, Viewport);
	FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

	RDG_EVENT_SCOPE(GraphBuilder, "My Render Pass");

	// Viewport parameters
	const FScreenPassTextureViewport SceneColorTextureViewport(SceneColor);
	const FScreenPassTextureViewportParameters SceneTextureViewportParams = GetTextureViewportParameters(SceneColorTextureViewport);

	// Render targets
	FScreenPassRenderTarget SceneColorCopyRenderTarget;
	SceneColorCopyRenderTarget.Texture = GraphBuilder.CreateTexture((*Inputs.SceneTextures)->SceneColorTexture->Desc, TEXT("Scene Color Copy"));
	FScreenPassRenderTarget UVMaskRenderTarget;
	UVMaskRenderTarget.Texture = GraphBuilder.CreateTexture((*Inputs.SceneTextures)->SceneColorTexture->Desc, TEXT("UV Mask"));

	// Shader setup
	TShaderMapRef<FCombineShaderPS> CombinePixelShader(GlobalShaderMap);
	FCombineShaderPS::FParameters* CombineParameters = GraphBuilder.AllocParameters<FCombineShaderPS::FParameters>();
	CombineParameters->SceneColor = (*Inputs.SceneTextures)->SceneColorTexture;
	CombineParameters->InputSampler = TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	CombineParameters->InputStencilTexture = (*Inputs.SceneTextures)->CustomDepthTexture;
	CombineParameters->Color = HighlightColor;
	CombineParameters->ViewParams = SceneTextureViewportParams;
	CombineParameters->RenderTargets[0] = FRenderTargetBinding(SceneColor.Texture, ERenderTargetLoadAction::ELoad);

	FPixelShaderUtils::AddFullscreenPass(
		GraphBuilder,
		GlobalShaderMap,
		FRDGEventName(TEXT("Combine")),
		CombinePixelShader,
		CombineParameters,
		Viewport);
}

//void FMyViewExtension::RenderHologram(FRHICommandListImmediate& RHICmdList, FSceneView& View)
//{
//	// Get the material's render proxy
//	FMaterialRenderProxy* MaterialRenderProxy = HologramMaterial->GetRenderProxy();
//
//	// Ensure the proxy is valid
//	if (!MaterialRenderProxy)
//	{
//		return;
//	}
//
//	// Get the FMaterial associated with the render proxy for the given feature level
//	const FMaterial* Material = MaterialRenderProxy->GetMaterialNoFallback(View.GetFeatureLevel());
//
//	if (!Material || !Material->GetRenderingThreadShaderMap())
//	{
//		return;
//	}
//
//	// Retrieve the custom shader from the material's shader map
//	TShaderRef<FHologramShaderPS> PixelShader = Material->GetRenderingThreadShaderMap()->GetShader<FHologramShaderPS>();
//
//	// Set up the graphics pipeline and use the custom shader
//	FGraphicsPipelineStateInitializer GraphicsPSOInit;
//	RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
//	GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
//	GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
//	GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
//	GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
//
//	SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);
//
//	// Bind shader parameters, etc.
//	//SetShaderParameters(RHICmdList, PixelShader, PixelShader.GetPixelShader(), View);
//	// Create a FMeshElementCollector to get a PDI (Primitive Draw Interface)
//	FMeshElementCollector Collector;
//
//	// Get the PDI from the Collector for the current view index (0 for single view)
//	FPrimitiveDrawInterface* PDI = Collector.GetPDI(0);
//
//	// Define the center position of the rectangle in world space.
//	FVector Center = FVector(0.0f, 0.0f, 100.0f); // Adjust Z to place it above ground
//
//	// Define the X and Y axes for the orientation of the rectangle.
//	FVector XAxis = FVector(1.0f, 0.0f, 0.0f); // Along the X-axis
//	FVector YAxis = FVector(0.0f, 1.0f, 0.0f); // Along the Y-axis
//
//	// Define the size of the rectangle.
//	float Width = 200.0f;   // Width along the X-axis
//	float Height = 100.0f;  // Height along the Y-axis
//
//	// Set the color, depth priority, and other properties.
//	FColor Color = FColor::Green;
//	uint8 DepthPriority = SDPG_World;  // Draw in the world space depth priority group
//	float Thickness = 2.0f;            // Line thickness
//	float DepthBias = 0.0f;            // No depth bias for simplicity
//	bool bScreenSpace = false;         // Draw in world space, not screen space
//
//	// Call the DrawRectangle function with the above parameters.
//	DrawRectangle(PDI, Center, XAxis, YAxis, Color, Width, Height, DepthPriority, Thickness, DepthBias, bScreenSpace);
//	
//}
