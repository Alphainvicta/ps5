// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ps5 : ModuleRules
{
	public ps5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
