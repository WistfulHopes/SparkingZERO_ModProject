using UnrealBuildTool;

public class SS : ModuleRules {
    public SS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "Chaos",
            "CinematicCamera",
            "ControlRig",
            "Core",
            "CoreUObject",
            "CriWareAdxLipSync",
            "CriWareRuntime",
            "DeveloperSettings",
            "Engine",
            "FieldSystemEngine",
            "Foliage",
            "GameplayCameras",
            "GeometryCollectionEngine",
            "GameplayTasks",
            "InputCore",
            "KantanChartsUMG",
            "KawaiiPhysics",
            "KoratControlRigExtension",
            "KoratUDS",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "RigVM",
            "SSKeyInput",
            "Slate",
            "SlateCore",
            "SpRuntime",
            "UMG",
            "WindSimShader"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "MovieSceneTracks",
        });

        if (Target.bBuildEditor)
        {
            PublicDependencyModuleNames.AddRange(new string[] {
                "UnrealEd",
                "PropertyEditor",
                "EditorStyle",
                "Sequencer",
                "MovieSceneTools"
            });
        }
    }
}