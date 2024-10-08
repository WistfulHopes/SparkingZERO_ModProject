#pragma once
#include "CoreMinimal.h"
#include "EKoratWeatherRequestPhase.generated.h"

UENUM(BlueprintType)
enum class EKoratWeatherRequestPhase : uint8 {
    PhaseNormal,
    PhaseCharging,
    PhaseSparking,
    PhaseChargeCancel,
    PhaseRestore,
    PhaseForceRestore,
};

