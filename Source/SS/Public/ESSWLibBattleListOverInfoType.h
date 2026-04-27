#pragma once
#include "CoreMinimal.h"
#include "ESSWLibBattleListOverInfoType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibBattleListOverInfoType : uint8 {
    None,
    PlayCount,
    TotalPlayCount,
    GoodCount,
    FavoriteCount,
    ClearRate,
    Hidden,
};

