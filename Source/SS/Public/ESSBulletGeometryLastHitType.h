#pragma once
#include "CoreMinimal.h"
#include "ESSBulletGeometryLastHitType.generated.h"

UENUM(BlueprintType)
enum class ESSBulletGeometryLastHitType : uint8 {
    PlayOT,
    Penerate,
    Destroy,
};

