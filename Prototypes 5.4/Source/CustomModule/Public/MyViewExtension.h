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
	void SetNoiseSize(const float& size);
	void SetNoiseStrength(const float& strength);
	void SetTime(const float& time);
	void SetMovementSpeed(const float& speed);
	void SetDebugLines(const bool& debug);
	void SetNoiseTexture(UTexture2D* tex);
	void SetFogParameters(UTexture2D* fogNoise, float fogFar, float fogNear, float fogDensity, float fogMovementSpeed, float FogNoiseScale, const FLinearColor& fogColor, const FLinearColor& fogSmokeColor);
	void SetEffectRadius(float circleRadius, FVector2f cirlceCenter, float circleEdge);

private:
	const void RenderCustomStencil(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) const;
	const void RenderAuraEffect(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) const;
	FLinearColor HighlightColor;

	FLinearColor TendrilEdgeColor;
	FLinearColor FogColor;
	FLinearColor FogSmokeColor;
	float DepthBias;
	float EdgeThickness;
	float EdgeIntensity;
	float NoiseSize;
	float Time = 0;
	float MovementSpeed;
	float NoiseStrength;
	float FogMovementSpeed;
	float FogDensity;
	float FogFar;
	float FogNear;
	float FogNoiseScale;
	FVector2f CircleCenter;
	float CircleRadius;
	float CircleBlend;
	uint32_t DebugLines;
	UTexture2D* NoiseTex;
	UTexture2D* FogNoise;
};