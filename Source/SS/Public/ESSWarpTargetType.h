#pragma once
#include "CoreMinimal.h"
#include "ESSWarpTargetType.generated.h"

UENUM(BlueprintType)
enum class ESSWarpTargetType : uint8 {
    SafeArea,
    SmallArea,
    StartLocation1P,
};

