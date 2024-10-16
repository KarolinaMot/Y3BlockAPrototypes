#pragma once
#include "GlobalShader.h"
#include "Runtime/Renderer/Public/ScreenPass.h"

BEGIN_SHADER_PARAMETER_STRUCT(FCombineShaderParameters, )
SHADER_PARAMETER(FLinearColor, Color)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneColor)
SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InputStencilTexture)
SHADER_PARAMETER_STRUCT(FScreenPassTextureViewportParameters, ViewParams)
RENDER_TARGET_BINDING_SLOTS()
END_SHADER_PARAMETER_STRUCT()

class FCombineShaderPS : public FGlobalShader {
public:
	DECLARE_EXPORTED_SHADER_TYPE(FCombineShaderPS, Global, );
	using FParameters = FCombineShaderParameters;
	SHADER_USE_PARAMETER_STRUCT(FCombineShaderPS, FGlobalShader);
};