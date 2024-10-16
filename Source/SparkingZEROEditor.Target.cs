using UnrealBuildTool;

public class SparkingZEROEditorTarget : TargetRules {
	public SparkingZEROEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SS",
			"SSEditor",
			"SSKeyInput",
		});
	}
}
