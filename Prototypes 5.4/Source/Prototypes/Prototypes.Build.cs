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

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
