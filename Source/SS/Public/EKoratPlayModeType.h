#pragma once
#include "CoreMinimal.h"
#include "EKoratPlayModeType.generated.h"

UENUM(BlueprintType)
enum class EKoratPlayModeType : uint8 {
    PlayMode_Story,
    PlayMode_Drama,
    PlayMode_PVE,
    PlayMode_EVE,
    PlayMode_Tournament,
    PlayMode_Training,
    PlayMode_RankMatch,
    PlayMode_PlayerMatch,
    PlayMode_BattleMode012,
    PlayMode_BattleMode010,
    PlayMode_Tutorial,
    PlayMode_TournamentOnline,
    PlayMode_RankMatchDP,
    PlayMode_BattleMode011,
    Num,
};

