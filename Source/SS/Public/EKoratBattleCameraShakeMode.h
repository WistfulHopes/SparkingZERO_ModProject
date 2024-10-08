#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraShakeMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraShakeMode : uint8 {
    KoratBattleCameraShakeModeMy,
    KoratBattleCameraShakeModeTarget,
    KoratBattleCameraShakeModeMT,
    KoratBattleCameraShakeModeLocation,
};

