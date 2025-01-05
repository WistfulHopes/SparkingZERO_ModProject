#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionDialogType.generated.h"

UENUM(BlueprintType)
enum class EMenuMissionDialogType : uint8 {
    MythicalOrbFull,
    MythicalOrbUnableReceive,
    WaitingRankingFinalized,
    Num,
    None,
};

