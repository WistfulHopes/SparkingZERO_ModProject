#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticSceneDecideButton.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticSceneDecideButton : uint8 {
    None,
    OpeningScene,
    VictoryScene,
    DefeatScene,
    VictoryEnding,
    DefeatEnding,
};

