#include "Shader.h"

IMPLEMENT_SHADER_TYPE(, FCombineShaderPS, TEXT("/CustomModule/Shaders.usf"), TEXT("CombineMainPS"), SF_Pixel);
IMPLEMENT_SHADER_TYPE(, FUVMaskShaderPS, TEXT("/CustomModule/Shaders.usf"), TEXT("UVMaskMainPS"), SF_Pixel);