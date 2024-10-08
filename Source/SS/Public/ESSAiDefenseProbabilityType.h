#pragma once
#include "CoreMinimal.h"
#include "ESSAiDefenseProbabilityType.generated.h"

UENUM(BlueprintType)
enum class ESSAiDefenseProbabilityType : uint8 {
    RevengeCounter,
    Repel,
    FastAvoidance,
    ZCounter,
    SuperCounter,
    RevengeDash,
    ThrowEscape,
    DefAscertain,
    DefSuperAscertain,
    DefZCounterSuperAscertain,
    DefGuardUp,
    DefGuardDown,
    DefGuard,
    Passive,
    DragonDashPassive,
    RushHighSpeedMoveCounter,
    CounterBlastImpact,
    MoveStandup,
    Max,
};

