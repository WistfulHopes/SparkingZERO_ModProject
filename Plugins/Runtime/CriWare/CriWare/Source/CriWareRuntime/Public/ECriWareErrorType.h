#pragma once
#include "CoreMinimal.h"
#include "ECriWareErrorType.generated.h"

UENUM(BlueprintType)
enum class ECriWareErrorType : uint8 {
    Warning,
    Error,
};

