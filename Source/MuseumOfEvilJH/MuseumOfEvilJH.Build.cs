// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MuseumOfEvilJH : ModuleRules
{
	public MuseumOfEvilJH(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"MuseumOfEvilJH",
			"MuseumOfEvilJH/Variant_Platforming",
			"MuseumOfEvilJH/Variant_Platforming/Animation",
			"MuseumOfEvilJH/Variant_Combat",
			"MuseumOfEvilJH/Variant_Combat/AI",
			"MuseumOfEvilJH/Variant_Combat/Animation",
			"MuseumOfEvilJH/Variant_Combat/Gameplay",
			"MuseumOfEvilJH/Variant_Combat/Interfaces",
			"MuseumOfEvilJH/Variant_Combat/UI",
			"MuseumOfEvilJH/Variant_SideScrolling",
			"MuseumOfEvilJH/Variant_SideScrolling/AI",
			"MuseumOfEvilJH/Variant_SideScrolling/Gameplay",
			"MuseumOfEvilJH/Variant_SideScrolling/Interfaces",
			"MuseumOfEvilJH/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
