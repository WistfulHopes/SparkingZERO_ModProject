#pragma once
#include "CoreMinimal.h"
#include "ECameraPhysicalDisparityTargetType.generated.h"

UENUM(BlueprintType)
enum class ECameraPhysicalDisparityTargetType : uint8 {
    Player,
    Enemy,
    PlayerAndEnemy,
    LagerOne,
    DistancePlayerAndEnemy,
    MAX,
};

