#pragma once
#include "CoreMinimal.h"
#include "EChartAxisPosition.generated.h"

UENUM(BlueprintType)
enum class EChartAxisPosition : uint8 {
    LeftBottom,
    RightTop,
    Floating,
};

