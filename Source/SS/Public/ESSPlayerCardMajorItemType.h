#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerCardMajorItemType.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerCardMajorItemType : uint8 {
    BattleMode012,
    BattleMode010,
    Tournament,
    RankMatch,
    Drama,
    Num,
};

