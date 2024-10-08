#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditDirectionDetailMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditDirectionDetailMode : uint8 {
    DirectionChara,
    DirectionNumeric,
    DirectionFormChange,
    DirectionConditions,
    DirectionItem,
    DirectionScene,
    DirectionEmote,
    TotalDirectionMode,
};

