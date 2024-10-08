#pragma once
#include "CoreMinimal.h"
#include "EShakeForceLerpType.generated.h"

UENUM(BlueprintType)
enum class EShakeForceLerpType : uint8 {
    Liner,
    EaseIn,
    EaseOut,
    EaseInOut,
    MAX,
};

