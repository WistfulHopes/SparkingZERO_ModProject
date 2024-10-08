#pragma once
#include "CoreMinimal.h"
#include "EKoratMovieSceneLookAtPartFlags.generated.h"

UENUM(BlueprintType)
enum class EKoratMovieSceneLookAtPartFlags : uint8 {
    None,
    Body,
    Head,
    Eye,
    BodyAndHead,
    HeadAndEye,
    BodyAndHeadAndEye,
};

