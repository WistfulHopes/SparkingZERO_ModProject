using UnrealBuildTool;

public class SparkingZEROTarget : TargetRules {
	public SparkingZEROTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SS",
			"SSKeyInput",
		});
	}
}
