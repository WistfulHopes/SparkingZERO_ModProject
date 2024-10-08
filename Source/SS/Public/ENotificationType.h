#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.generated.h"

UENUM(BlueprintType)
enum class ENotificationType : uint8 {
    None,
    Information,
    Mission,
    Reward,
    Event,
    Shop,
    Max,
};

