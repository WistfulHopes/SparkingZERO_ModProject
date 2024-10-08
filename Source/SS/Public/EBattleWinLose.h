#pragma once
#include "CoreMinimal.h"
#include "EBattleWinLose.generated.h"

UENUM(BlueprintType)
enum class EBattleWinLose : uint8 {
    None,
    Win,
    Lose,
    Draw,
    Timeup,
    RingOut,
    Win1P,
    Win2P,
};

