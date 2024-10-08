#pragma once
#include "CoreMinimal.h"
#include "ECameraDataCheckMode.generated.h"

UENUM(BlueprintType)
enum class ECameraDataCheckMode : uint8 {
    NoOutput,
    Check,
    CheckAndErrDialog,
    ValidateOnly,
    MAX,
};

