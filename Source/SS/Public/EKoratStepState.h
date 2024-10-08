#pragma once
#include "CoreMinimal.h"
#include "EKoratStepState.generated.h"

UENUM(BlueprintType)
enum class EKoratStepState : uint8 {
    OFF,
    TURN,
    IN_,
    OT,
};

