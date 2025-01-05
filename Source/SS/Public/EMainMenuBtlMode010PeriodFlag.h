#pragma once
#include "CoreMinimal.h"
#include "EMainMenuBtlMode010PeriodFlag.generated.h"

UENUM(BlueprintType)
enum class EMainMenuBtlMode010PeriodFlag : uint8 {
    None,
    After1stEventStart,
    InEventPeriod,
    InRevceiveRewardPeriod = 4,
};

