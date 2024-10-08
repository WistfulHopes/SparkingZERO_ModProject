#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionFilter.generated.h"

UENUM(BlueprintType)
enum class EMenuMissionFilter : uint8 {
    Achieved,
    NotAchieved,
    MissionClearType,
    Num,
    None,
};

