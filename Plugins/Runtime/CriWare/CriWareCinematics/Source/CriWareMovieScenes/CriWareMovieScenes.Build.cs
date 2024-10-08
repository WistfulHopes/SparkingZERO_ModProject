using UnrealBuildTool;

public class CriWareMovieScenes : ModuleRules {
    public CriWareMovieScenes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "MovieScene",
            "MovieSceneTracks",
        });
    }
}
