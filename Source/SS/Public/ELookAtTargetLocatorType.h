#pragma once
#include "CoreMinimal.h"
#include "ELookAtTargetLocatorType.generated.h"

UENUM(BlueprintType)
enum class ELookAtTargetLocatorType : uint8 {
    LookAtTargetLocatorTypeNormal,
    LookAtTargetLocatorTypeWeight,
    LookAtTargetLocatorTypeMax,
};

