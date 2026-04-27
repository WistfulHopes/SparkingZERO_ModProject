#pragma once
#include "CoreMinimal.h"
#include "EBattlePracticeInputFailureType.generated.h"

UENUM(BlueprintType)
enum class EBattlePracticeInputFailureType : uint8 {
    Non,
    Slow,
    Fast,
};

