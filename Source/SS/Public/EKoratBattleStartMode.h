#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleStartMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleStartMode : uint8 {
    First,
    PauseRetry,
    FinishedRetry,
    Replay,
};

