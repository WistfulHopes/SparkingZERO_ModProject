#pragma once
#include "CoreMinimal.h"
#include "EKoratActionLookatPartFlags.generated.h"

UENUM(BlueprintType)
enum class EKoratActionLookatPartFlags : uint8 {
    None,
    Body,
    Head,
    Eye = 4,
    BodyAndHead = 3,
    HeadAndEye = 6,
    BodyAndHeadAndEye,
};

