#pragma once
#include "CoreMinimal.h"
#include "EKoratActionLookatOperationType.generated.h"

UENUM(BlueprintType)
enum class EKoratActionLookatOperationType : uint8 {
    None,
    ActionData,
    LevelSequence,
};

