#pragma once
#include "CoreMinimal.h"
#include "EBulletExplosionType.generated.h"

UENUM(BlueprintType)
enum class EBulletExplosionType : uint8 {
    None,
    SingleExp,
    GroupExp,
    Max,
};

