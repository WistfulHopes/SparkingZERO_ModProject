#pragma once
#include "CoreMinimal.h"
#include "ECameraSideBySideMode.generated.h"

UENUM(BlueprintType)
enum class ECameraSideBySideMode : uint8 {
    None,
    Double,
    Single1P,
    Single2P,
};

