#pragma once
#include "CoreMinimal.h"
#include "EKortaDramticMissionCategory.generated.h"

UENUM(BlueprintType)
enum class EKortaDramticMissionCategory : uint8 {
    None,
    BattleWinNum,
    SpecialWin,
};

