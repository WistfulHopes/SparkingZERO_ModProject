#pragma once
#include "CoreMinimal.h"
#include "ECrashImpactCameraDistance.generated.h"

UENUM(BlueprintType)
enum class ECrashImpactCameraDistance : uint8 {
    kNear,
    kFar,
    kNum,
};

