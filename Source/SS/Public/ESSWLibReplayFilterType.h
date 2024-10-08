#pragma once
#include "CoreMinimal.h"
#include "ESSWLibReplayFilterType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibReplayFilterType : uint8 {
    None,
    Posted,
    NotPosted,
    Favorite,
    NotFavorite,
};

