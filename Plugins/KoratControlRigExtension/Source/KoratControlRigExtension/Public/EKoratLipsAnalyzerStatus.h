#pragma once
#include "CoreMinimal.h"
#include "EKoratLipsAnalyzerStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratLipsAnalyzerStatus : uint8 {
    Stop,
    Reading,
    TransitioningToShut,
};

