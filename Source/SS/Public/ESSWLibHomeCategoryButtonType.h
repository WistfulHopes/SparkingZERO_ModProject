#pragma once
#include "CoreMinimal.h"
#include "ESSWLibHomeCategoryButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibHomeCategoryButtonType : uint8 {
    None,
    Newly,
    Official,
    RankingGood,
    Difficulty,
    Pickup,
    RankingPlayCount,
};

