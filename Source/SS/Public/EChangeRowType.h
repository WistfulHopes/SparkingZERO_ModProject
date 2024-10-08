#pragma once
#include "CoreMinimal.h"
#include "EChangeRowType.generated.h"

UENUM(BlueprintType)
enum class EChangeRowType : uint8 {
    Row_00to01,
    Row_00to02,
    Row_01to00,
    Row_01to02,
    Row_02to00,
    Row_02to01,
};

