#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditSummaryMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditSummaryMode : uint8 {
    Image,
    BaseText,
    ReplaceWord,
    SumModeNum,
};

