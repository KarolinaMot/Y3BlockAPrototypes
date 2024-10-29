#include "MyViewExtension.h"
#include "StencilPostPrShader.h"
#include "AuraShader.h"

#include "PixelShaderUtils.h"
#include "PostProcess/PostProcessing.h"
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


FMyViewExtension::FMyViewExtension(const FAutoRegister& AutoRegister, FLinearColor tendrilEdgeColor, float depthBias, float edgeThickness, float edgeIntensity, float noiseSize, float noiseStrength, float movementSpeed, UTexture2D* texture) : FSceneViewExtensionBase(AutoRegister) {
	TendrilEdgeColor = tendrilEdgeColor;
	DepthBias = depthBias;
	EdgeThickness = edgeThickness;
	NoiseSize = noiseSize;
	NoiseStrength = noiseStrength;
	NoiseTex = texture;
	EdgeIntensity = edgeIntensity;
	MovementSpeed = movementSpeed;
}

void FMyViewExtension::PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) {
	if ((*Inputs.SceneTextures)->CustomDepthTexture->Desc.Format != PF_DepthStencil) return; // This check was only necessary in UE5 - see below

	checkSlow(View.bIsViewInfo); // can't do dynamic_cast because FViewInfo doesn't have any virtual functions.
	RenderAuraEffect(GraphBuilder, View, Inputs);
}

void FMyViewExtension::SetHighlightColor(const FLinearColor& color)
{
	HighlightColor = color;
}

void FMyViewExtension::SetTendrilEdgeColor(const FLinearColor& color)
{
	TendrilEdgeColor = color;
}

void FMyViewExtension::SetDepthBias(const float& bias)
{
	DepthBias = bias;
}

void FMyViewExtension::SetEdgeThickness(const float& thickness)
{
	EdgeThickness = thickness;
}

void FMyViewExtension::SetEdgeIntensity(const float& intensity)
{
	EdgeIntensity = intensity;
}

void FMyViewExtension::SetSceneDepthSize(const float& size)
{
	SceneDepthSize = size;
}

void FMyViewExtension::SetNoiseSize(const float& size)
{
	NoiseSize = size;
}

void FMyViewExtension::SetNoiseStrength(const float& strength)
{
	NoiseStrength = strength;
}

void FMyViewExtension::SetTime(const float& time)
{
	Time = time;
}

void FMyViewExtension::SetMovementSpeed(const float& speed)
{
	MovementSpeed = speed;
}

void FMyViewExtension::SetDebugLines(const bool& debug)
{
	DebugLines = static_cast<uint32_t>(debug);
}

void FMyViewExtension::SetNoiseTexture(UTexture2D* tex)
{
	NoiseTex = tex;
}

void FMyViewExtension::SetFogParameters(UTexture2D* fogNoise, float fogFar, float fogNear, float fogDensity, float fogMovementSpeed, float fogNoiseScale, const FLinearColor& fogColor, const FLinearColor& fogSmokeColor)
{
	FogNoise = fogNoise;
	FogFar = fogFar;
	FogNear = fogNear;
	FogDensity = fogDensity;
	FogMovementSpeed = fogMovementSpeed;
	FogColor = fogColor;
	FogSmokeColor = fogSmokeColor;
	FogNoiseScale = fogNoiseScale;
}

void FMyViewExtension::SetEffectRadius(float circleRadius, FVector2f cirlceCenter, float circleEdge)
{
	CircleRadius = circleRadius;
	CircleCenter = cirlceCenter;
	CircleBlend = circleEdge;
}

const void FMyViewExtension::RenderCustomStencil(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) const
{
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

const void FMyViewExtension::RenderAuraEffect(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) const
{
	if (NoiseTex == nullptr || FogNoise == nullptr)
		return;

	const FIntRect Viewport = static_cast<const FViewInfo&>(View).ViewRect;
	FScreenPassTexture SceneColor((*Inputs.SceneTextures)->SceneColorTexture, Viewport);
	FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);

	RDG_EVENT_SCOPE(GraphBuilder, "Aura Render Pass");

	// Viewport parameters
	const FScreenPassTextureViewport SceneColorTextureViewport(SceneColor);
	const FScreenPassTextureViewportParameters SceneTextureViewportParams = GetTextureViewportParameters(SceneColorTextureViewport);
	const FViewMatrices& ViewMatrices = View.ViewMatrices;
	FMatrix ProjectionMatrixDouble = ViewMatrices.GetProjectionMatrix();

	// Convert to FMatrix44f (single precision)
	FMatrix44f ProjectionMatrix;
	for (int32 Row = 0; Row < 4; ++Row)
	{
		for (int32 Col = 0; Col < 4; ++Col)
		{
			ProjectionMatrix.M[Row][Col] = static_cast<float>(ProjectionMatrixDouble.M[Row][Col]);
		}
	}

	// Render targets
	FScreenPassRenderTarget SceneColorCopyRenderTarget;
	SceneColorCopyRenderTarget.Texture = GraphBuilder.CreateTexture((*Inputs.SceneTextures)->SceneColorTexture->Desc, TEXT("Scene Color Copy"));
	FScreenPassRenderTarget UVMaskRenderTarget;
	UVMaskRenderTarget.Texture = GraphBuilder.CreateTexture((*Inputs.SceneTextures)->SceneColorTexture->Desc, TEXT("UV Mask"));
	FTextureResource* TextureResource = NoiseTex->GetResource();
	FTextureRHIRef TextureRHI = TextureResource->TextureRHI;
	auto noiseTexture = GraphBuilder.RegisterExternalTexture(CreateRenderTarget(TextureRHI, TEXT("NoiseTexture")));

	FTextureResource* FogTextureRes = FogNoise->GetResource();
	FTextureRHIRef FogTextureRHI = FogTextureRes->TextureRHI;
	auto fogTex = GraphBuilder.RegisterExternalTexture(CreateRenderTarget(FogTextureRHI, TEXT("FogNoiseTexture")));

	// Shader setup
	TShaderMapRef<FAuraShaderPS> AuraPixelShader(GlobalShaderMap);
	FAuraShaderPS::FParameters* AuraParameters = GraphBuilder.AllocParameters<FAuraShaderPS::FParameters>();
	AuraParameters->SceneColor = (*Inputs.SceneTextures)->SceneColorTexture;
	AuraParameters->SceneDepth = (*Inputs.SceneTextures)->SceneDepthTexture;
	AuraParameters->InputSampler = TStaticSamplerState<SF_Point, AM_Wrap, AM_Wrap, AM_Wrap>::GetRHI();
	AuraParameters->LineColor = TendrilEdgeColor;
	AuraParameters->FogSmokeColor = FogSmokeColor;
	AuraParameters->FogColor = FogColor;
	AuraParameters->DepthBias = DepthBias;
	AuraParameters->SceneDepthSize = SceneDepthSize;
	AuraParameters->EdgeThickness = EdgeThickness;
	AuraParameters->EdgeIntensity = EdgeIntensity;
	AuraParameters->NoiseSize = NoiseSize;
	AuraParameters->NoiseStrength = NoiseStrength;
	AuraParameters->MovementSpeed = MovementSpeed;
	AuraParameters->Time = Time;
	AuraParameters->FogMovementSpeed = FogMovementSpeed;
	AuraParameters->FogDensity = FogDensity;
	AuraParameters->FogFar = FogFar;
	AuraParameters->FogNear = FogNear;
	AuraParameters->FogNoiseScale = FogNoiseScale;
	AuraParameters->DebugLines = DebugLines;
	AuraParameters->CircleCenter = CircleCenter;
	AuraParameters->CircleRadius = CircleRadius;
	AuraParameters->EdgeBlend = CircleBlend;
	AuraParameters->Noise = noiseTexture;
	AuraParameters->FogNoise = fogTex;
	AuraParameters->ViewParams = SceneTextureViewportParams;
	AuraParameters->RenderTargets[0] = FRenderTargetBinding(SceneColor.Texture, ERenderTargetLoadAction::ELoad);

	FPixelShaderUtils::AddFullscreenPass(
		GraphBuilder,
		GlobalShaderMap,
		FRDGEventName(TEXT("Aura")),
		AuraPixelShader,
		AuraParameters,
		Viewport);
}