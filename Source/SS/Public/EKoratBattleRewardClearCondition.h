#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleRewardClearCondition.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleRewardClearCondition : uint8 {
    None,
    Normal,
    Anather,
    All,
};

