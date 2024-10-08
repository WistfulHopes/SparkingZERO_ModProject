#pragma once
#include "CoreMinimal.h"
#include "ESSChameleonBlendModes.generated.h"

UENUM(BlueprintType)
enum class ESSChameleonBlendModes : uint8 {
    Normal,
    ColorBurn,
    ColorDodge,
    Difference,
    Exclusion,
    Hardlight,
    LinearBurn,
    LinearDodge,
    LinearLight,
    PinLight,
    SoftLight,
    Screen,
    Lighten,
    Darken,
    Overlay,
    Multiply,
};

