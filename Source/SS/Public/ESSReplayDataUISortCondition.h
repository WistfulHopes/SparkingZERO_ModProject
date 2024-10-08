#pragma once
#include "CoreMinimal.h"
#include "ESSReplayDataUISortCondition.generated.h"

UENUM(BlueprintType)
enum class ESSReplayDataUISortCondition : uint8 {
    None,
    SaveDate,
    BattleMode,
};

