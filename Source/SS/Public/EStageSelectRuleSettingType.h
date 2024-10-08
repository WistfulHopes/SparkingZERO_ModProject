#pragma once
#include "CoreMinimal.h"
#include "EStageSelectRuleSettingType.generated.h"

UENUM(BlueprintType)
enum class EStageSelectRuleSettingType : uint8 {
    None,
    TimeLimit,
    PowerupItem,
    ComLevel,
    Com1Level,
    Com2Level,
    OutField,
    BattleRule,
    Fly,
    PlayerSwitch,
    PlayerFormChange,
    PlayerCombine,
    ComSwitch,
    ComFormChange,
    ComCombine,
    Invalid,
};

