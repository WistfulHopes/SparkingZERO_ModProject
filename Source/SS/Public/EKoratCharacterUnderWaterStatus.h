#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterUnderWaterStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterUnderWaterStatus : uint8 {
    None,
    Surface,
    UnderWater,
    Depth,
};

