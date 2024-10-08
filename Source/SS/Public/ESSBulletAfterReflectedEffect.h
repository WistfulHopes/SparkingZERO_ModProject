#pragma once
#include "CoreMinimal.h"
#include "ESSBulletAfterReflectedEffect.generated.h"

UENUM(BlueprintType)
enum class ESSBulletAfterReflectedEffect : uint8 {
    Reflect,
    Cancel,
    AutoReflect,
    Erase,
    NoExplosion,
};

