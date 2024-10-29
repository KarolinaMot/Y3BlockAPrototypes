#pragma once
#include "GlobalShader.h"
#include "Runtime/Renderer/Public/ScreenPass.h"

BEGIN_SHADER_PARAMETER_STRUCT(FAuraShaderParameters, )
SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneColor)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneDepth)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, Noise)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, FogNoise)
SHADER_PARAMETER(FLinearColor, LineColor)
SHADER_PARAMETER(FLinearColor, FogColor)
SHADER_PARAMETER(FLinearColor, FogSmokeColor)
SHADER_PARAMETER(float, EdgeThickness)
SHADER_PARAMETER(float, EdgeIntensity)
SHADER_PARAMETER(float, DepthBias)
SHADER_PARAMETER(float, SceneDepthSize)
SHADER_PARAMETER(float, Time)
SHADER_PARAMETER(float, MovementSpeed)
SHADER_PARAMETER(float, NoiseSize)
SHADER_PARAMETER(float, NoiseStrength)
SHADER_PARAMETER(float, FogMovementSpeed)
SHADER_PARAMETER(float, FogDensity)
SHADER_PARAMETER(float, FogFar)
SHADER_PARAMETER(float, FogNear)
SHADER_PARAMETER(float, FogNoiseScale)
SHADER_PARAMETER(uint32_t, DebugLines)
SHADER_PARAMETER(float, CircleRadius)
SHADER_PARAMETER(FVector2f, CircleCenter)
SHADER_PARAMETER(float, EdgeBlend)
SHADER_PARAMETER_STRUCT(FScreenPassTextureViewportParameters, ViewParams)
RENDER_TARGET_BINDING_SLOTS()
END_SHADER_PARAMETER_STRUCT()

class FAuraShaderPS : public FGlobalShader {
public:
	DECLARE_EXPORTED_SHADER_TYPE(FAuraShaderPS, Global,);
	using FParameters = FAuraShaderParameters;
	SHADER_USE_PARAMETER_STRUCT(FAuraShaderPS, FGlobalShader);
};