#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleRetryMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleRetryMode : uint8 {
    NormalRetry,
    SampleResetRetry,
    PracticeResetRetry1st,
    PracticeResetRetry,
    PracticeRetry,
    TrainingResetRetry,
    Hp0Retry,
    RestrictRetry,
};

