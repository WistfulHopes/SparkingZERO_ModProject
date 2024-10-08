#pragma once
#include "CoreMinimal.h"
#include "EKoratInviteSceneJumpMode.generated.h"

UENUM(BlueprintType)
enum class EKoratInviteSceneJumpMode : uint8 {
    None,
    InvitePlayerMatching,
    DragonStory,
    PlayerMatching,
    RankMatching,
    PlayerVsCom,
    Trainning,
    TenkaichiOnline,
    BattleMode012,
    BattleMode010,
    Max,
};

