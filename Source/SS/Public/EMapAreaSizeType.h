#pragma once
#include "CoreMinimal.h"
#include "EMapAreaSizeType.generated.h"

UENUM(BlueprintType)
enum class EMapAreaSizeType : uint8 {
    NORMAL,
    LARGE_GROUND,
    LARGE_AIR,
    SMALL,
};

