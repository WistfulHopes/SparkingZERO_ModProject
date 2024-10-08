#pragma once
#include "CoreMinimal.h"
#include "EKoratEnergyBulletDirection.generated.h"

UENUM(BlueprintType)
enum class EKoratEnergyBulletDirection : uint8 {
    EnemyDirection,
    MyFrontDirection,
    RepelBulletDirection,
    DefaultDirection,
};

