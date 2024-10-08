#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterMovementTransition.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterMovementTransition : uint8 {
    None,
    Stop,
    StopImmediately,
};

