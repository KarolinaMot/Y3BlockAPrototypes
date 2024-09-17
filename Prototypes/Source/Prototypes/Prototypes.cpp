// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prototypes.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h" // include this!

void FPrototypesModule::StartupModule()
{
	//#if (ENGINE_MINOR_VERSION >= 21)
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders")); // add this!
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
	//#endif

}

void FPrototypesModule::ShutdownModule(){}

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, ShaderBits, "ShaderBits" );
IMPLEMENT_PRIMARY_GAME_MODULE(FPrototypesModule, Prototypes, "Prototypes"); // edit this!
