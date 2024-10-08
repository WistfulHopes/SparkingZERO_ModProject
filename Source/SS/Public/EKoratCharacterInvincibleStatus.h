#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterInvincibleStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterInvincibleStatus : uint8 {
    None,
    All,
    CombativesOnly,
    EnergyBulletOnly,
    ThrowOnly,
    DownState,
    CombativesAndThrow,
    NormalEnergyBulletOnly,
};

