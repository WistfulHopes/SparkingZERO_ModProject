#pragma once
#include "CoreMinimal.h"
#include "ESSBulletCharacterFirstHitType.generated.h"

UENUM(BlueprintType)
enum class ESSBulletCharacterFirstHitType : uint8 {
    SingleHit,
    StopMultiHit,
    PenerateMultiHit,
    TraceMultiHit,
};

