#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectHitAirWallType.generated.h"

UENUM(BlueprintType)
enum class EKoratEffectHitAirWallType : uint8 {
    Unknown,
    Normal,
    Blow,
};

