#pragma once
#include "CoreMinimal.h"
#include "ECameraLocatorType.generated.h"

UENUM(BlueprintType)
enum class ECameraLocatorType : uint8 {
    CameraLocatorTypeNormal,
    CameraLocatorTypeNormalRoll,
    CameraLocatorTypeWeight,
    CameraLocatorTypeWeightRoll,
    CameraLocatorTypeBoneAngle,
    CameraLocatorTypeMax,
};

