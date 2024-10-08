#pragma once
#include "CoreMinimal.h"
#include "ESSReplayDataUWinLose.generated.h"

UENUM(BlueprintType)
enum class ESSReplayDataUWinLose : uint8 {
    None,
    Win1P,
    Lose1P,
    Draw,
};

