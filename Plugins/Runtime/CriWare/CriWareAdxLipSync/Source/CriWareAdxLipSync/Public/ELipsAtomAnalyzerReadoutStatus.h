#pragma once
#include "CoreMinimal.h"
#include "ELipsAtomAnalyzerReadoutStatus.generated.h"

UENUM(BlueprintType)
enum class ELipsAtomAnalyzerReadoutStatus : uint8 {
    Stop,
    Reading,
    TransitioningToShut,
};

