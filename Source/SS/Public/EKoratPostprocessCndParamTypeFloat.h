#pragma once
#include "CoreMinimal.h"
#include "EKoratPostprocessCndParamTypeFloat.generated.h"

UENUM(BlueprintType)
enum class EKoratPostprocessCndParamTypeFloat : uint8 {
    DOF_Kernel_MaxBackgroundRadius,
    DOF_Kernel_MaxForegroundRadius,
    DOF_Scatter_MaxSpriteRatio,
    MAX,
};

