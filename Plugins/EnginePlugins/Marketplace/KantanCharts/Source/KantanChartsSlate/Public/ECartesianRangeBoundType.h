#pragma once
#include "CoreMinimal.h"
#include "ECartesianRangeBoundType.generated.h"

UENUM(BlueprintType)
enum class ECartesianRangeBoundType : uint8 {
    FixedValue,
    FitToData,
    FitToDataRounded,
};

