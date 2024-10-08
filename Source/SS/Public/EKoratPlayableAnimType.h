#pragma once
#include "CoreMinimal.h"
#include "EKoratPlayableAnimType.generated.h"

UENUM(BlueprintType)
enum class EKoratPlayableAnimType : uint8 {
    All,
    MoveAndMovingAction,
    Action,
    Reaction,
    MoveAndMovingActionAndReaction,
    ActionAndReaction,
};

