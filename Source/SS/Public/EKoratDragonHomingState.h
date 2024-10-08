#pragma once
#include "CoreMinimal.h"
#include "EKoratDragonHomingState.generated.h"

UENUM(BlueprintType)
enum class EKoratDragonHomingState : uint8 {
    OFF,
    IN_,
    LP,
    OT,
    DashCombatives,
};

