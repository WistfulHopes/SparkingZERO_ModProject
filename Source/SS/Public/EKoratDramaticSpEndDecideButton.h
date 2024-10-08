#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticSpEndDecideButton.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticSpEndDecideButton : uint8 {
    None,
    SpVictoryCondition,
    SpDefeatCondition,
    SpVictoryScene,
    SpDefeatScene,
    SpVictoryEnding,
    SpDefeatEnding,
};

