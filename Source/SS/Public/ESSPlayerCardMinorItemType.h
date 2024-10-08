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
    Drama_PostCount,
    Drama_PostReplayCount,
    Drama_FollowerCount,
    Drama_FavoriteCount,
    Drama_LikeCount,
    Num,
};

