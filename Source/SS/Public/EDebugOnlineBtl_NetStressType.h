#pragma once
#include "CoreMinimal.h"
#include "EDebugOnlineBtl_NetStressType.generated.h"

UENUM(BlueprintType)
enum class EDebugOnlineBtl_NetStressType : uint8 {
    None,
    Light,
    Medium,
    Heavy,
    VeryHeavy,
    Count,
};

