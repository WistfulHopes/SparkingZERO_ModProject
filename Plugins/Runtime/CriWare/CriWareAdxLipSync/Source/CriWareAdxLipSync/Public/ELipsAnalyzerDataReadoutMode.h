#pragma once
#include "CoreMinimal.h"
#include "ELipsAnalyzerDataReadoutMode.generated.h"

UENUM(BlueprintType)
enum class ELipsAnalyzerDataReadoutMode : uint8 {
    ProcessIfNoData,
    SilentIfNoData,
    ProcessAlways,
    ProcessWhileReading,
};

