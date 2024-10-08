#pragma once
#include "CoreMinimal.h"
#include "ELipsAtomAnalyzerProcessStatus.generated.h"

UENUM(BlueprintType)
enum class ELipsAtomAnalyzerProcessStatus : uint8 {
    Stop,
    ProcessingPlayback,
    ProcessingSilence,
};

