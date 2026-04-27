#pragma once
#include "CoreMinimal.h"
#include "ESSTitleIdAddedInfoType.generated.h"

UENUM(BlueprintType)
enum class ESSTitleIdAddedInfoType : uint8 {
    None,
    RankMatchRanking,
    CharaRanking,
    WinStreak_ModeNSR_ACB,
    WinStreak_ModeNSR_UCB,
};

