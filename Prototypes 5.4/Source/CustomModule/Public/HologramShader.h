#pragma once
#include "MaterialShader.h"
#include "ShaderParameterStruct.h"

class FHologramShaderPS : public FMaterialShader {

public:
	DECLARE_SHADER_TYPE(FHologramShaderPS, Material);
	//using FParameters = FCombineShaderParameters;
	//SHADER_USE_PARAMETER_STRUCT(FCombineShaderPS, FGlobalShader);
    static bool ShouldCompilePermutation(const FMaterialShaderPermutationParameters& Parameters)
    {
        // Determines if this shader should be compiled for a given material type.
        return Parameters.MaterialParameters.bIsUsedWithStaticLighting;
    }

    static void ModifyCompilationEnvironment(
        const FMaterialShaderPermutationParameters& Parameters,
        FShaderCompilerEnvironment& OutEnvironment
    )
    {
        FMaterialShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
        // Define custom preprocessor defines here if needed
        OutEnvironment.SetDefine(TEXT("MY_CUSTOM_SHADER"), 1);
    }
};
