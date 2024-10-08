#pragma once
#include "CoreMinimal.h"
#include "ESSCutCameraBlendRateType.generated.h"

UENUM(BlueprintType)
enum class ESSCutCameraBlendRateType : uint8 {
    SSCutCameraBlendRateNone,
    SSCutCameraBlendRateLinear,
    SSCutCameraBlendRateMax,
};

