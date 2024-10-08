#pragma once
#include "CoreMinimal.h"
#include "EKoratWeatherSection.generated.h"

UENUM(BlueprintType)
enum class EKoratWeatherSection : uint8 {
    Level1,
    Level2,
    Level3,
    Level1to2,
    Level2to3,
    Level3to1,
};

