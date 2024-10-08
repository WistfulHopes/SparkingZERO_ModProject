#pragma once
#include "CoreMinimal.h"
#include "ESSSpeedImpactTimingUiJudge.generated.h"

UENUM(BlueprintType)
enum class ESSSpeedImpactTimingUiJudge : uint8 {
    Just,
    Ok,
    Miss,
    None,
};

