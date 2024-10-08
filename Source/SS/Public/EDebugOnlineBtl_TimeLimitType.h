#pragma once
#include "CoreMinimal.h"
#include "EDebugOnlineBtl_TimeLimitType.generated.h"

UENUM(BlueprintType)
enum class EDebugOnlineBtl_TimeLimitType : uint8 {
    TimeInf,
    Time120,
    Time180,
    Time240,
    Count,
};

