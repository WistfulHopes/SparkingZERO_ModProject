#pragma once
#include "CoreMinimal.h"
#include "EKoratDashUpDownState.generated.h"

UENUM(BlueprintType)
enum class EKoratDashUpDownState : uint8 {
    OFF,
    IN_,
    LP,
    OT,
    Landing,
};

