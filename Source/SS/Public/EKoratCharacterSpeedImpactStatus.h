#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterSpeedImpactStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterSpeedImpactStatus : uint8 {
    None,
    TimingInit,
    TimingKeyWait,
    TimingJudge,
    TimingEnd,
    RapidInit,
    RapidKeyWait,
    RapidJudge,
    RapidEnd,
};

