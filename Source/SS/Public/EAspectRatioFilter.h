#pragma once
#include "CoreMinimal.h"
#include "EAspectRatioFilter.generated.h"

UENUM(BlueprintType)
enum class EAspectRatioFilter : uint8 {
    None,
    Ratio4x3,
    Ratio16x9,
    Ratio16x10 = 4,
};

