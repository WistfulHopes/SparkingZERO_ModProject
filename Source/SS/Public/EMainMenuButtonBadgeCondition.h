#pragma once
#include "CoreMinimal.h"
#include "EMainMenuButtonBadgeCondition.generated.h"

UENUM(BlueprintType)
enum class EMainMenuButtonBadgeCondition : uint8 {
    None,
    AnyUnrewardedMission,
    UnrewardedWishMissions,
    UnrewardedLifeLongMission,
    UnrewardedTutorialMission,
    UnrewardedMode02Mission,
    UnrewardedMode03Mission,
    UnRewardedTrophyMission,
    NewProductInShop,
};

