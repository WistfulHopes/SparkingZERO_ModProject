#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraAttachMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraAttachMode : uint8 {
    KoratBattleCameraAttachModeMy,
    KoratBattleCameraAttachModeWorld,
    KoratBattleCameraAttachModeTarget,
    KoratBattleCameraAttachModeWorldMy,
    KoratBattleCameraAttachModePos,
    KoratBattleCameraAttachModeWorldMyMove,
    KoratBattleCameraAttachModeMax,
};

