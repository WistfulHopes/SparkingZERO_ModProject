#pragma once
#include "CoreMinimal.h"
#include "EElapsedTimeType.generated.h"

UENUM(BlueprintType)
enum class EElapsedTimeType : uint8 {
    Pure,
    Event,
    Max,
};

