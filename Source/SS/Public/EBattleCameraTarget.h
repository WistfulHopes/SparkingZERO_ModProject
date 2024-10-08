#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraTarget.generated.h"

UENUM(BlueprintType)
enum class EBattleCameraTarget : uint8 {
    BattleCameraTargetNon,
    BattleCameraTargetBetween,
    BattleCameraTargetTarget,
    BattleCameraTargetMy,
    BattleCameraTargetMax,
};

