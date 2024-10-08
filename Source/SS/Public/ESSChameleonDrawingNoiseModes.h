#pragma once
#include "CoreMinimal.h"
#include "ESSChameleonDrawingNoiseModes.generated.h"

UENUM(BlueprintType)
enum class ESSChameleonDrawingNoiseModes : uint8 {
    Simplex,
    Perlin,
};

