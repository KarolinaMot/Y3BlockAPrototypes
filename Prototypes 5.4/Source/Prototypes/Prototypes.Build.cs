// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Prototypes : ModuleRules
{
	public Prototypes(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "RenderCore", "CoreUObject", "Engine", "InputCore", "CustomModule" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
        PublicIncludePaths.AddRange(new string[] { "D:\\GITHUB\\Univertsity\\Y3A-Prototype\\Prototypes" });
    }
}
