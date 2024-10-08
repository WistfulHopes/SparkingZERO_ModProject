#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterCrashImpactStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterCrashImpactStatus : uint8 {
    None,
    Initial,
    WaitStart,
    WaitInput,
    StartInput,
    EndInput,
    EndGame,
    End,
};

