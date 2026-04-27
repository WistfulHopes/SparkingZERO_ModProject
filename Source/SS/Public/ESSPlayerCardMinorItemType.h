#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerCardMinorItemType.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerCardMinorItemType : uint8 {
    BattleMode012_TeamingCount,
    BattleMode012_QualifyCount,
    BattleMode012_FinalCount,
    BattleMode012_FinalWinCount,
    BattleMode010_DefeatCount,
    Tournament_PlayCount,
    Tournament_WinCount,
    Tournament_MaxWinCount,
    Tournament_MaxRankValue,
    Tournament_TopCharaCount,
    Tournament_TopCharaName,
    RankMatch_WinRate,
    RankMatch_PlayCount,
    RankMatch_WinCount,
    RankMatch_Single_WinStreakCount,
    RankMatch_DP_WinStreakCount,
    RankMatchSeason_WinRate,
    RankMatchSeason_PlayCount,
    RankMatchSeason_WinCount,
    RankMatchSeason_Single_WinStreakCount,
    RankMatchSeason_DP_WinStreakCount,
    Drama_PostCount,
    Drama_PostReplayCount,
    Drama_FollowerCount,
    Drama_FavoriteCount,
    Drama_LikeCount,
    Num,
};

