#pragma once
#include "CoreMinimal.h"
#include "EKoratSortFilterUseMode.generated.h"

UENUM(BlueprintType)
enum class EKoratSortFilterUseMode : uint8 {
    Always,
    BattleMode010,
    Num,
    Invalid,
};

