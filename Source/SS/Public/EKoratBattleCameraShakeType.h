#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraShakeType : uint8 {
    KoratBattleCameraShakeTypeNon,
    KoratBattleCameraShakeTypeLifeSS,
    KoratBattleCameraShakeTypeLifeS,
    KoratBattleCameraShakeTypeLifeM,
    KoratBattleCameraShakeTypeLifeL,
    KoratBattleCameraShakeTypeLifeLL,
    KoratBattleCameraShakeTypeLoopSS,
    KoratBattleCameraShakeTypeLoopS,
    KoratBattleCameraShakeTypeLoopM,
    KoratBattleCameraShakeTypeLoopL,
    KoratBattleCameraShakeTypeLoopLL,
    KoratBattleCameraShakeTypeTurbulence,
    KoratBattleCameraShakeTypeMax,
};

