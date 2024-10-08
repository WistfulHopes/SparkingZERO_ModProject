#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticWLibNetState.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticWLibNetState : uint8 {
    Idle,
    Delay,
    Wait,
    Success,
    Failed,
};

