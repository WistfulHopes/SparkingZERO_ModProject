#pragma once
#include "CoreMinimal.h"
#include "EMatchingCondPropValueType.generated.h"

UENUM(BlueprintType)
enum class EMatchingCondPropValueType : uint8 {
    Numeric,
    String,
};

