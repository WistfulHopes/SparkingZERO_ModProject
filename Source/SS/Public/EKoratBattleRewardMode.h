#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleRewardMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleRewardMode : uint8 {
    None,
    Win,
    Lose,
    WinLose,
};

