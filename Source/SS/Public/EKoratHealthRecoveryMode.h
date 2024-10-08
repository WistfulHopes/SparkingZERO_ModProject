#pragma once
#include "CoreMinimal.h"
#include "EKoratHealthRecoveryMode.generated.h"

UENUM(BlueprintType)
enum class EKoratHealthRecoveryMode : uint8 {
    None,
    SpecifiedParcentage,
    Full,
};

