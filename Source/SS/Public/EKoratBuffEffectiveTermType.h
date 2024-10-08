#pragma once
#include "CoreMinimal.h"
#include "EKoratBuffEffectiveTermType.generated.h"

UENUM(BlueprintType)
enum class EKoratBuffEffectiveTermType : uint8 {
    None,
    Battle,
    Timer,
    Blast = 4,
    TriggerCount = 8,
    Sparking = 16,
    DamageReaction = 32,
    UltimateBlast = 64,
    ZeroSP = 128,
};

