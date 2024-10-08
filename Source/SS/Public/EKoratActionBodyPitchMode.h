#pragma once
#include "CoreMinimal.h"
#include "EKoratActionBodyPitchMode.generated.h"

UENUM(BlueprintType)
enum class EKoratActionBodyPitchMode : uint8 {
    Opponent,
    SnapHorizontal,
    SnapOpponent,
    IdleAction,
    MoveAction,
    ChargeAction,
    JumpAction,
};

