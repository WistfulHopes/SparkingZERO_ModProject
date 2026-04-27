using UnrealBuildTool;

public class SparkingZEROTarget : TargetRules
{
	public SparkingZEROTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

		LinkType = TargetLinkType.Modular;

		ExtraModuleNames.AddRange(new string[]
		{
			"SS",
			"SSKeyInput"
		});
	}
}
