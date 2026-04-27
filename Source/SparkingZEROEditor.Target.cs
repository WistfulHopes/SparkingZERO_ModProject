using UnrealBuildTool;

public class SparkingZEROEditorTarget : TargetRules {
	public SparkingZEROEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.AddRange(new string[] {
			"SS",
			"SSEditor",
			"SSTukiEditor",
			"SSKeyInput",
		});
	}
}
