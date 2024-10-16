#pragma once

#include "SceneViewExtension.h"

class CUSTOMMODULE_API FMyViewExtension : public FSceneViewExtensionBase {
public:
	FMyViewExtension(const FAutoRegister& AutoRegister, FLinearColor tendrilEdgeColor, float depthBias, float edgeThickness, float edgeIntensity, float noiseSize, float noiseStrength, float movementSpeed, UTexture2D* texture);

	//~ Begin FSceneViewExtensionBase Interface
	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {};
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override {};
	virtual void PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override {};
	virtual void PostRenderBasePass_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override {};
	virtual void PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) override;
	//~ End FSceneViewExtensionBase Interface

	void SetHighlightColor(const FLinearColor& color);
	void SetTendrilEdgeColor(const FLinearColor& color);
	void SetDepthBias(const float& bias);
	void SetEdgeThickness(const float& thickness);
	void SetEdgeIntensity(const float& intensity);
	void SetSceneDepthSize(const float& size);
	void SetNoiseSize(const float& size);
	void SetNoiseStrength(const float& strength);
	void SetTime(const float& time);
	void SetMovementSpeed(const float& speed);
	void SetDebugLines(const bool& debug);
	void SetNoiseTexture(UTexture2D* tex);

private:
	const void RenderCustomStencil(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) const;
	const void RenderAuraEffect(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) const;
	FLinearColor HighlightColor;

	FLinearColor TendrilEdgeColor;
	float DepthBias;
	float EdgeThickness;
	float EdgeIntensity;
	float SceneDepthSize;
	float NoiseSize;
	float Time = 0;
	float MovementSpeed;
	float NoiseStrength;

	uint32_t DebugLines;
	UTexture2D* NoiseTex;
};