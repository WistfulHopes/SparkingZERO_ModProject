#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterRadarChartParamType.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterRadarChartParamType : uint8 {
    Life,
    Blow,
    Energy,
    Rush,
    Blast,
    Num,
    Invalid,
};

