// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPBooleanSubtract : ModuleRules
{
	public CPPBooleanSubtract(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
