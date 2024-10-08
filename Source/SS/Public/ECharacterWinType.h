#pragma once
#include "CoreMinimal.h"
#include "ECharacterWinType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWinType : uint8 {
    NormalVictory,
    CompleteVictory,
    NarrowVictory,
    DramaticFinish,
    GiantDramaticFinish,
    DramaticMode,
    Battle,
    AdventureIf,
    Fate,
};

