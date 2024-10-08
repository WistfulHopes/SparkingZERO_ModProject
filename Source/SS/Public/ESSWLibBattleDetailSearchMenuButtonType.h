#pragma once
#include "CoreMinimal.h"
#include "ESSWLibBattleDetailSearchMenuButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibBattleDetailSearchMenuButtonType : uint8 {
    None,
    Difficulty,
    PlayCount,
    TimeLimit,
    OutField,
    FormChangeAndCombine,
    Switch,
    Fly,
    Stage,
    Character,
};

