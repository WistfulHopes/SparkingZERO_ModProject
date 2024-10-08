#pragma once
#include "CoreMinimal.h"
#include "EKoratDrawingNoiseModes.generated.h"

UENUM(BlueprintType)
enum class EKoratDrawingNoiseModes : uint8 {
    Simplex,
    Perlin,
};

