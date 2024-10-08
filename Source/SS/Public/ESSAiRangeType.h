#pragma once
#include "CoreMinimal.h"
#include "ESSAiRangeType.generated.h"

UENUM(BlueprintType)
enum class ESSAiRangeType : uint8 {
    RangeShort,
    RangeShortMedium,
    RangeMedium,
    RangeMediumLong,
    RangeLong,
};

