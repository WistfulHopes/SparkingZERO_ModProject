#pragma once
#include "CoreMinimal.h"
#include "ERushState.generated.h"

UENUM(BlueprintType)
enum class ERushState : uint8 {
    NONE,
    FIX,
    CHASE,
    IDLE,
};

