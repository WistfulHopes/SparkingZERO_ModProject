#pragma once
#include "CoreMinimal.h"
#include "EKoratJumpState.generated.h"

UENUM(BlueprintType)
enum class EKoratJumpState : uint8 {
    OFF,
    IN_,
    UP,
    DW,
    OT,
    FT,
};

