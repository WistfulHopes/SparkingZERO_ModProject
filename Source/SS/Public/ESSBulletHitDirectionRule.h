#pragma once
#include "CoreMinimal.h"
#include "ESSBulletHitDirectionRule.generated.h"

UENUM(BlueprintType)
enum class ESSBulletHitDirectionRule : uint8 {
    Bullet,
    ToHitTarget,
};

