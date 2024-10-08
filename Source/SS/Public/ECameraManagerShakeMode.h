#pragma once
#include "CoreMinimal.h"
#include "ECameraManagerShakeMode.generated.h"

UENUM(BlueprintType)
enum class ECameraManagerShakeMode : uint8 {
    REF_AND_PUSH,
    REF_ONLY,
    PUSH_ONLY,
    MAX,
};

