using UnrealBuildTool;

public class SSEditor : ModuleRules {
    public SSEditor(ReadOnlyTargetRules Target) : base(Target) {
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
            "EditorStyle",
            "Engine",
            "FieldSystemEngine",
            "Foliage",
            "GameplayCameras",
            "GeometryCollectionEngine",
            "InputCore",
            "KantanChartsUMG",
            "KoratControlRigExtension",
            "KoratUDS",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "PropertyEditor",
            "RigVM",
            "Sequencer",
            "SS",
            "SSKeyInput",
            "Slate",
            "SlateCore",
            "SpRuntime",
            "UMG",
            "UnrealEd",
            "WindSimShader", "MovieSceneTools",
        });
    }
}
