#pragma once
#include "CoreMinimal.h"
#include "EShakeTargetType.generated.h"

UENUM(BlueprintType)
enum class EShakeTargetType : uint8 {
    Player,
    PlayerBullet,
    HitEnemy,
    MAX,
};

