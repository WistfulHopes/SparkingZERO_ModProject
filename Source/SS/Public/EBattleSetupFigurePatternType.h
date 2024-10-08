#pragma once
#include "CoreMinimal.h"
#include "EBattleSetupFigurePatternType.generated.h"

UENUM(BlueprintType)
enum class EBattleSetupFigurePatternType : uint8 {
    Normal,
    LargePlayer,
    LargeEnemy,
    LargeAndLarge,
    SuperLargePlayer,
    SuperLargeEnemy,
    SuperLargeAndSuperLarge,
    LargeAndSuperLarge,
    SuperLargeAndLarge,
    MAX,
};

