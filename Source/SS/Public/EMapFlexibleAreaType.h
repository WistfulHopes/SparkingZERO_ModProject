#pragma once
#include "CoreMinimal.h"
#include "EMapFlexibleAreaType.generated.h"

UENUM(BlueprintType)
enum class EMapFlexibleAreaType : uint8 {
    None,
    WaterDirectablePoint,
    SmallArea,
};

