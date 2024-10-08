#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.generated.h"

UENUM()
enum class EAtomSoundRendererType : int32 {
    Any,
    Native,
    Asr,
    Hardware1 = Native,
    Hardware2 = 65537,
    Hardware3 = 131073,
    Hardware4 = 196609,
    Spatial = 4,
    VibrationHardware = 196625,
    RESTRICTED = 254,
    Pad,
};

