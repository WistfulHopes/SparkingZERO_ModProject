#pragma once
#include "CoreMinimal.h"
#include "EBattleImpactTriggerType.generated.h"

UENUM(BlueprintType)
enum class EBattleImpactTriggerType : uint8 {
    Speed,
    Power,
    Blast,
    Crush,
    Max,
};

