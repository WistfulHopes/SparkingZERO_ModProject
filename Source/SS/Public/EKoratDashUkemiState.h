#pragma once
#include "CoreMinimal.h"
#include "EKoratDashUkemiState.generated.h"

UENUM(BlueprintType)
enum class EKoratDashUkemiState : uint8 {
    OFF,
    IN_,
    DASH_IN,
    DASH_LP,
    DASH_OT,
    DashCombatives,
};

