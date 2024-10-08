#pragma once
#include "CoreMinimal.h"
#include "EBlastDashMoveType.generated.h"

UENUM(BlueprintType)
enum class EBlastDashMoveType : uint8 {
    UncontrollableStraight,
    ControllableTarget,
    ControllableTurn,
};

