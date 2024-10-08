#pragma once
#include "CoreMinimal.h"
#include "EKoratNetworkTestCommand.generated.h"

UENUM(BlueprintType)
enum class EKoratNetworkTestCommand : uint8 {
    None,
    OnlineEnable,
    MatchingEnable,
    GetPlayerRankingTop,
    GetPlayerRankingMine,
};

