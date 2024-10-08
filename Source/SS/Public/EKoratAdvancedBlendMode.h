#pragma once
#include "CoreMinimal.h"
#include "EKoratAdvancedBlendMode.generated.h"

UENUM(BlueprintType)
enum class EKoratAdvancedBlendMode : uint8 {
    EKBM_Normal,
    EKBM_ColorBurn,
    EKBM_ColorDodge,
    EKBM_Difference,
    EKBM_Exclusion,
    EKBM_Hardlight,
    EKBM_LinearBurn,
    EKBM_LinearLight,
    EKBM_PinLight,
    EKBM_SoftLight,
    EKBM_Screen,
    EKBM_Lighten,
    EKBM_Darken,
    EKBM_Overlay,
    EKBM_Multiply,
};

