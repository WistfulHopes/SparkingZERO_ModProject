#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleOnlineMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleOnlineMode : uint8 {
    None,
    RankMatch,
    QuickMatch,
    Ranking,
    PlayerMatch,
    Tenkaichi,
    BattleMode011,
    BattleMode010,
    BattleMode012,
};

