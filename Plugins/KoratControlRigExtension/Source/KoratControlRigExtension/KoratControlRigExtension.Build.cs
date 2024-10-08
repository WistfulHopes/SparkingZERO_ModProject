using UnrealBuildTool;

public class KoratControlRigExtension : ModuleRules {
    public KoratControlRigExtension(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
            "RigVM",
        });
    }
}
