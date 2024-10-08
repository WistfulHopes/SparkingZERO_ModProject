#pragma once
#include "CoreMinimal.h"
#include "EKoratGrassStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratGrassStatus : uint8 {
    ChangingTransform,
    Trampled,
    Deformed,
    UnTrampling,
    UnDeforming,
    WaitingToResumeGrow,
    Growing,
    Burnt,
    FreshlyDeformed,
    NOTHING,
};

