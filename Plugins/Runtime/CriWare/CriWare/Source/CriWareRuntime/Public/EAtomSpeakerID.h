#pragma once
#include "CoreMinimal.h"
#include "EAtomSpeakerID.generated.h"

UENUM(BlueprintType)
enum class EAtomSpeakerID : uint8 {
    FrontLeft,
    FrontRight,
    FrontCenter,
    LowFrequency,
    SurroundLeft,
    SurroundRight,
    SurroundBackLeft,
    SurroundBackRight,
};

