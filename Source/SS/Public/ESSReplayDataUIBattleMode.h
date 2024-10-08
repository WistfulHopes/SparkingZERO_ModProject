#pragma once
#include "CoreMinimal.h"
#include "ESSReplayDataUIBattleMode.generated.h"

UENUM(BlueprintType)
enum class ESSReplayDataUIBattleMode : uint8 {
    None,
    OnlineRankMatch,
    OnlineCasualMatch,
    Offline1PvsCom,
    OfflineComvsCom,
    OfflineTenkaichiBudokai,
    OnlineTenkaichiBudokai,
    DramaticBattle,
    BattleMode010,
    BattleMode012,
    Offline1Pvs2P,
    OfflineComvs1P,
    OfflineBattle,
    OnlineBattle,
};

