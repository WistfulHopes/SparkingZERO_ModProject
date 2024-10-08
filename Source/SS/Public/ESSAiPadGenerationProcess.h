#pragma once
#include "CoreMinimal.h"
#include "ESSAiPadGenerationProcess.generated.h"

UENUM(BlueprintType)
enum class ESSAiPadGenerationProcess : uint8 {
    Idle,
    WaitingInputSuccess,
    WaitingForIdling,
    InputSucccess,
    InputFailureTimeOut,
    InputFailureCancel,
    InputFailureTimeOutIdle,
};

