#pragma once
#include "CoreMinimal.h"
#include "EAtomFormat.generated.h"

UENUM(BlueprintType)
enum class EAtomFormat : uint8 {
    None,
    ADX,
    HCA,
    HCAMX,
    AIFF,
    Wave,
    RawPCM,
    Vibration,
    AudioBuffer,
    Instrument,
    Hardware1,
    Hardware2,
    Num,
};

