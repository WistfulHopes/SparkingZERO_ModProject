#pragma once
#include "CoreMinimal.h"
#include "EKoratZBurstDashState.generated.h"

UENUM(BlueprintType)
enum class EKoratZBurstDashState : uint8 {
    OFF,
    IN_,
    LP,
    OT,
    DashCombatives,
};

