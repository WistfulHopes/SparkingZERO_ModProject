#pragma once
#include "CoreMinimal.h"
#include "EKoratTermsMode.generated.h"

UENUM(BlueprintType)
enum class EKoratTermsMode : uint8 {
    None,
    Service,
    Policy,
    Data,
    Num,
};

