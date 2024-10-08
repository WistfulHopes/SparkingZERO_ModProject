#pragma once
#include "CoreMinimal.h"
#include "EBattleImpactTriggerEventOpt.generated.h"

UENUM(BlueprintType)
enum class EBattleImpactTriggerEventOpt : uint8 {
    kCurrentTarget,
    kIntroTarget,
    kGameTarget,
    kFinishTarget,
    kMoveToSafetyPosition,
    kMoveToDifferentPosition,
    kReturnToPosition,
    kNum,
};

