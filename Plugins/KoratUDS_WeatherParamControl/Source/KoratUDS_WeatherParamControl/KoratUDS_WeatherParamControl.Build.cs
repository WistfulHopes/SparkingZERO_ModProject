using UnrealBuildTool;

public class KoratUDS_WeatherParamControl : ModuleRules {
    public KoratUDS_WeatherParamControl(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "KoratUDS",
        });
    }
}
