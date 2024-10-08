#pragma once
#include "CoreMinimal.h"
#include "ECameraPhysicalDisparityLargeSmallType.generated.h"

UENUM(BlueprintType)
enum class ECameraPhysicalDisparityLargeSmallType : uint8 {
    Normal,
    LargePlayer,
    LargeEnemy,
    LargeAndLarge,
    MAX,
};

