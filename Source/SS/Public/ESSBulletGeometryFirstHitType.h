#pragma once
#include "CoreMinimal.h"
#include "ESSBulletGeometryFirstHitType.generated.h"

UENUM(BlueprintType)
enum class ESSBulletGeometryFirstHitType : uint8 {
    SingleHit,
    StopMultiHit,
    PenerateMultiHit,
    RunSurfaceMultiHit,
};

