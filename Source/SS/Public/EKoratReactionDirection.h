#pragma once
#include "CoreMinimal.h"
#include "EKoratReactionDirection.generated.h"

UENUM(BlueprintType)
enum class EKoratReactionDirection : uint8 {
    Default,
    HighFront,
    HighBack,
    HighLeft,
    HighRight,
    MidFront,
    MidBack,
    MidLeft,
    MidRight,
    LowFront,
    LowBack,
    LowLeft,
    LowRight,
    MidLowFront,
    MidLowBack,
    MidLowLeft,
    MidLowRight,
};

