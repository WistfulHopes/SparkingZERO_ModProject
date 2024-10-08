#pragma once
#include "CoreMinimal.h"
#include "ESSBulletHitSituation.generated.h"

UENUM(BlueprintType)
enum class ESSBulletHitSituation : uint8 {
    Other,
    Guard,
    Reflect,
};

