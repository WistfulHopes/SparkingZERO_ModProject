#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterPowerImpactStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterPowerImpactStatus : uint8 {
    None,
    Initial,
    GameStart,
    GaugeUp,
    GaugeDown,
    Penalty,
    InJudge,
    End,
};

