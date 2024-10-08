#pragma once
#include "CoreMinimal.h"
#include "ESSTrainingBattleUiCharaActionType.generated.h"

UENUM(BlueprintType)
enum class ESSTrainingBattleUiCharaActionType : uint8 {
    Entry,
    Wait,
    Decide,
};

