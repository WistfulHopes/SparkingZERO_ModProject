#pragma once
#include "CoreMinimal.h"
#include "ECartesianScalingType.generated.h"

UENUM(BlueprintType)
enum class ECartesianScalingType : uint8 {
    FixedScale,
    FixedRange,
};

