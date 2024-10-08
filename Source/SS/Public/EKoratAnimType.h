#pragma once
#include "CoreMinimal.h"
#include "EKoratAnimType.generated.h"

UENUM(BlueprintType)
enum class EKoratAnimType : uint8 {
    None,
    Move,
    MovingAction,
    Action,
    Reaction,
    AddtiveReaction,
};

