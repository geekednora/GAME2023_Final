// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Final_Gastello : ModuleRules
{
	public Final_Gastello(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput",
        "AIModule", "NavigationSystem", "GameplayTasks" });
	}
}
