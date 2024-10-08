#pragma once
#include "CoreMinimal.h"
#include "EKoratWeatherModeState.generated.h"

UENUM(BlueprintType)
enum class EKoratWeatherModeState : uint8 {
    Normal,
    Charge,
    TransitionCharging,
    Sparking,
    TransitionSparking,
    TransitionForceSparking,
    CancelCharge,
    TransFinish,
    Num,
};

