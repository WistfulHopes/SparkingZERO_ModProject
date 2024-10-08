#pragma once
#include "CoreMinimal.h"
#include "EKoratOnlineBattleMatchingState.generated.h"

UENUM(BlueprintType)
enum class EKoratOnlineBattleMatchingState : uint8 {
    None,
    BeforeMatching,
    Matching,
    Matched,
};

