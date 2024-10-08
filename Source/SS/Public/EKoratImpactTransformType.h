#pragma once
#include "CoreMinimal.h"
#include "EKoratImpactTransformType.generated.h"

UENUM(BlueprintType)
enum class EKoratImpactTransformType : uint8 {
    ImpactHand1,
    ImpactHand2,
    ImpactNullBetween,
    Num,
};

