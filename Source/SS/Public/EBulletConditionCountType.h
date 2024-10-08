#pragma once
#include "CoreMinimal.h"
#include "EBulletConditionCountType.generated.h"

UENUM(BlueprintType)
enum class EBulletConditionCountType : uint8 {
    Hit,
    Finish,
    Invalidated,
    MultiHit,
    Reflecting,
    Reflected,
    Max,
};

