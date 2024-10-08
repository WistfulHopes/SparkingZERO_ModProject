#pragma once
#include "CoreMinimal.h"
#include "EMovieMode.generated.h"

UENUM(BlueprintType)
enum class EMovieMode : uint8 {
    EMovieModeNon,
    EMovieModePlay,
    EMovieModeStop,
    EMovieModePause,
    EMovieModeEnd,
};

