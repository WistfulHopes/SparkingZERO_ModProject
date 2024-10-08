#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraMode : uint8 {
    KoratBattleCameraModeSequence,
    KoratBattleCameraModeBattle,
    KoratBattleCameraModeDragonDash,
    KoratBattleCameraModeDamageHit,
    KoratBattleCameraModPowerInpact,
    KoratBattleCameraModeHit,
    KoratBattleCameraModeMax,
};

