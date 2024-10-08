#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineHitInfoState.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineHitInfoState : uint8 {
    None,
    New,
    UseRequest,
    Using,
    Destroy,
    Continue,
    Num,
};

