#pragma once
#include "CoreMinimal.h"
#include "EFateExecutionOrderType.generated.h"

UENUM(BlueprintType)
enum class EFateExecutionOrderType : uint8 {
    None,
    First,
    Second,
};

