#pragma once
#include "CoreMinimal.h"
#include "EUKoratCharacterMovementAct.generated.h"

UENUM(BlueprintType)
enum class EUKoratCharacterMovementAct : uint8 {
    Idle,
    Move,
    MoveToReference,
    Crash,
};

