#pragma once
#include "CoreMinimal.h"
#include "EAdjustOrder.generated.h"

UENUM(BlueprintType)
enum class EAdjustOrder : uint8 {
    LookAtTargetToCamera,
    CameraToLookAtTarget,
    MAX,
};

