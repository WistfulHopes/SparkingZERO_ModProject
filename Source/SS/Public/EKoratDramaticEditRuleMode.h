#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditRuleMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditRuleMode : uint8 {
    Stage,
    BGM,
    ChangeRule,
    Time,
    Win,
    Lose,
    SumModeNum,
};

