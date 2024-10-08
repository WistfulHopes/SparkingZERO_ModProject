#pragma once
#include "CoreMinimal.h"
#include "EManaPlaybackTimer.generated.h"

UENUM(BlueprintType)
enum class EManaPlaybackTimer : uint8 {
    Default,
    RealTime,
    FrameTime,
    Manual,
};

