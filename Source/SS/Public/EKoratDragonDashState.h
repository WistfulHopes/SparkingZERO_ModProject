#pragma once
#include "CoreMinimal.h"
#include "EKoratDragonDashState.generated.h"

UENUM(BlueprintType)
enum class EKoratDragonDashState : uint8 {
    OFF,
    IN_,
    LP,
    OT,
    BK,
    DashCombatives,
    QuickIN,
};

