#pragma once
#include "CoreMinimal.h"
#include "EKoratActionHitCheckType.generated.h"

UENUM(BlueprintType)
enum class EKoratActionHitCheckType : uint8 {
    None,
    HitAndMiss,
    MissOnly,
    ForceHit,
};

