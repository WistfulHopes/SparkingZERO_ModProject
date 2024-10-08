#pragma once
#include "CoreMinimal.h"
#include "ESSBlastImpactPositionType.generated.h"

UENUM(BlueprintType)
enum class ESSBlastImpactPositionType : uint8 {
    kSafety,
    kDifferent,
    kReturn,
};

