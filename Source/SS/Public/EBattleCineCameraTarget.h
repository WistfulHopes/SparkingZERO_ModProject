#pragma once
#include "CoreMinimal.h"
#include "EBattleCineCameraTarget.generated.h"

UENUM(BlueprintType)
enum class EBattleCineCameraTarget : uint8 {
    BattleCameraTargetNon,
    BattleCameraTargetBetween,
    BattleCameraTargetTarget,
    BattleCameraTargetMy,
    BattleCameraTargetMax,
};

