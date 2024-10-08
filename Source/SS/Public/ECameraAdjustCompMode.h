#pragma once
#include "CoreMinimal.h"
#include "ECameraAdjustCompMode.generated.h"

UENUM(BlueprintType)
enum class ECameraAdjustCompMode : uint8 {
    AVERAGE,
    BIG,
    PLAYER,
    ENEMY,
    MAX,
};

