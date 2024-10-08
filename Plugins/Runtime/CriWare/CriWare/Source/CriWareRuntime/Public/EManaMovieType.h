#pragma once
#include "CoreMinimal.h"
#include "EManaMovieType.generated.h"

UENUM(BlueprintType)
enum class EManaMovieType : uint8 {
    SofdecPrime,
    H264,
    VP9,
    Num,
    Unknown = 255,
};

