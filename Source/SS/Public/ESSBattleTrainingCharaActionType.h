#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingCharaActionType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingCharaActionType : uint8 {
    Entry,
    Wait,
    Decide,
};

