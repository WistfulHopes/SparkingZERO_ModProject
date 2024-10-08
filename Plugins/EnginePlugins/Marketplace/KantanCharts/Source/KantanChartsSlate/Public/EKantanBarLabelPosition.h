#pragma once
#include "CoreMinimal.h"
#include "EKantanBarLabelPosition.generated.h"

UENUM(BlueprintType)
enum class EKantanBarLabelPosition : uint8 {
    NoLabels,
    Standard,
    Overlaid,
};

