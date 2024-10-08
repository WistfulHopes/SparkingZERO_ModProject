#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterBlastImpactStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterBlastImpactStatus : uint8 {
    None,
    Prepare,
    InitTime,
    InitTimeWait,
    UiStartTime,
    InputTime,
    JudgeTime,
    FinishTime,
};

