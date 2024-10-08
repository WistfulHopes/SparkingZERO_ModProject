#pragma once
#include "CoreMinimal.h"
#include "EKoratStepType.generated.h"

UENUM(BlueprintType)
enum class EKoratStepType : uint8 {
    Front,
    FlyBack,
    FlyLeft,
    FlyRight,
    GroundBack,
    GroundLeft,
    GroundRight,
    LongFront,
    LongBack,
};

