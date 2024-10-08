using UnrealBuildTool;

public class CriWareAdxLipSync : ModuleRules {
    public CriWareAdxLipSync(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "MovieScene",
        });
    }
}
