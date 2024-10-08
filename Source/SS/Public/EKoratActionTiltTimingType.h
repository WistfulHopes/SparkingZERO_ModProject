#pragma once
#include "CoreMinimal.h"
#include "EKoratActionTiltTimingType.generated.h"

UENUM(BlueprintType)
enum class EKoratActionTiltTimingType : uint8 {
    None,
    StartAction,
    InAction,
    Charging,
    Reset,
};

