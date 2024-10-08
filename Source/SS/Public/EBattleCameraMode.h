#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraMode.generated.h"

UENUM(BlueprintType)
enum class EBattleCameraMode : uint8 {
    BattleCameraModeBattle,
    BattleCameraModeFree,
    BattleCameraModeLock,
    BattleCameraModeMax,
};

