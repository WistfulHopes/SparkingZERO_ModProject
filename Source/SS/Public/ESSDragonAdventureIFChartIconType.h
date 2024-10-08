#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFChartIconType.generated.h"

UENUM(BlueprintType)
enum class ESSDragonAdventureIFChartIconType : uint8 {
    Battle,
    Talk,
    Unlock,
    BranchBattle,
    BranchTalk,
    BranchUnlock,
    SideNote,
};

