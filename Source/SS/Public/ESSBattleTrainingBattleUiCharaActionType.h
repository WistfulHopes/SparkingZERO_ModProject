#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingBattleUiCharaActionType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingBattleUiCharaActionType : uint8 {
    Entry,
    Wait,
    Decide,
};

