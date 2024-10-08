#pragma once
#include "CoreMinimal.h"
#include "EShakeListenerType.generated.h"

UENUM(BlueprintType)
enum class EShakeListenerType : uint8 {
    PlayerAndEnemy,
    PlayerOnly,
    EnemyOnly,
    MainCameraOnly,
    MAX,
};

