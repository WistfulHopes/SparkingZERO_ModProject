#pragma once
#include "CoreMinimal.h"
#include "EKoratFixedGaugeType.generated.h"

UENUM(BlueprintType)
enum class EKoratFixedGaugeType : uint8 {
    None,
    Min,
    Max,
    Sparking,
};

