#pragma once
#include "CoreMinimal.h"
#include "ESSWLibHomePeriodCategoryButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibHomePeriodCategoryButtonType : uint8 {
    None,
    RankingEvent,
    RankingGood,
    RankingFavorite,
    RankingPlayCount,
    RankingDifficulty,
    Pickup,
};

