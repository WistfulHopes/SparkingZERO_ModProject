#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataMajorItemType.generated.h"

UENUM(BlueprintType)
enum class ESSGalleryMyDataMajorItemType : uint8 {
    Character,
    Stage,
    Money,
    PlayerLv,
    PlayTime,
    BattleMode012,
    BattleMode010,
    Tournament,
    Tournament_Online,
    RankMatch,
    QuickMatch,
    Story,
    Drama,
    Pray,
    Mission,
    Title,
    Item,
    Num,
};

