#pragma once
#include "CoreMinimal.h"
#include "EKoratHighSpeedMoveState.generated.h"

UENUM(BlueprintType)
enum class EKoratHighSpeedMoveState : uint8 {
    OFF,
    IN_,
    LP,
    OT,
};

