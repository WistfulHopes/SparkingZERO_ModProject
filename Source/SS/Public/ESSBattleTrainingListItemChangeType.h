#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingListItemChangeType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingListItemChangeType : uint8 {
    None,
    Left,
    Right,
};

