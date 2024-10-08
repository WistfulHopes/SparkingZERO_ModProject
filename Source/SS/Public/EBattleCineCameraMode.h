#pragma once
#include "CoreMinimal.h"
#include "EBattleCineCameraMode.generated.h"

UENUM(BlueprintType)
enum class EBattleCineCameraMode : uint8 {
    BattleCameraModeBattle,
    BattleCameraModeFree,
    BattleCameraModeLock,
    BattleCameraModeMax,
};

