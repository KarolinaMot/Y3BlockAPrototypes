#include "CustomModule.h"

void FCustomModule::StartupModule() {
	FString BaseDir = FPaths::Combine(FPaths::GameSourceDir(), TEXT("CustomModule"));
	FString ModuleShaderDir = FPaths::Combine(BaseDir, TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/CustomModule"), ModuleShaderDir);
}

IMPLEMENT_MODULE(FCustomModule, CustomModule)