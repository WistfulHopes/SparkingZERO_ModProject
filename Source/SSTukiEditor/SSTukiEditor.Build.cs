using UnrealBuildTool;

public class SSTukiEditor : ModuleRules {
    public SSTukiEditor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AppFramework",
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
            "MovieSceneTools",
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
            "WindSimShader", 
        });
    }
}
