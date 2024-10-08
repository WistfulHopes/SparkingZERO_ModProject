#pragma once
#include "CoreMinimal.h"
#include "ESSBattleMode010Difficulty.generated.h"

UENUM(BlueprintType)
enum class ESSBattleMode010Difficulty : uint8 {
    None,
    Easy,
    Normal,
    Hard,
    VeryHard,
};

