#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterLocomotionGroundRunningState.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterLocomotionGroundRunningState : uint8 {
    None,
    RunningInExec,
    RunningInDone,
    RunningOutExec,
    RunningOutDone,
};

