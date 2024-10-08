#pragma once
#include "CoreMinimal.h"
#include "EKoratSetCustomTimeDilationReason.generated.h"

UENUM(BlueprintType)
enum class EKoratSetCustomTimeDilationReason : uint8 {
    None,
    Other,
    HitStop,
    Vanishing = 4,
    Demo = 8,
    Combine_EffectAffect = Other,
};

