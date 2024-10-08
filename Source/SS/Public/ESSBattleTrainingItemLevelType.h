#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingItemLevelType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingItemLevelType : uint8 {
    Elementary,
    Intermediate,
    Advanced,
    Explanation,
    BattleRules,
};

