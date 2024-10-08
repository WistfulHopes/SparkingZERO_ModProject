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
            "RigVM",
            "SSKeyInput",
            "Slate",
            "SlateCore",
            "SpRuntime",
            "UMG",
            "WindSimShader",
        });
    }
}
