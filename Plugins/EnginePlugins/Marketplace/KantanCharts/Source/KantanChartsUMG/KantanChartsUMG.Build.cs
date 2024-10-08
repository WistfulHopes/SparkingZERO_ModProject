using UnrealBuildTool;

public class KantanChartsUMG : ModuleRules {
    public KantanChartsUMG(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "KantanChartsDatasource",
            "KantanChartsSlate",
            "SlateCore",
            "UMG",
        });
    }
}
