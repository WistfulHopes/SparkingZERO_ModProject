#pragma once
#include "CoreMinimal.h"
#include "ECameraPhysicalDisparityType.generated.h"

UENUM(BlueprintType)
enum class ECameraPhysicalDisparityType : uint8 {
    None,
    Height,
    Height_Length,
    Height_FocalLength,
    Height_Length_FocalLength,
    Height_LengthHalf_FocalLengthHalf,
    Length,
    Length_FocalLength,
    LengthHalf_FocalLengthHalf,
    FocalLength,
    MAX,
};

