#pragma once
#include "CoreMinimal.h"
#include "FKoratSelectedButtonMode.generated.h"

UENUM(BlueprintType)
enum class FKoratSelectedButtonMode : uint8 {
    OpeningEdit,
    CharaEdit,
    BattleRuleEdit,
    DirectionEdit,
    EndingEdit,
    TestPlay,
    Save,
    None,
};

