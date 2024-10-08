#pragma once
#include "CoreMinimal.h"
#include "ESSPowerGaugeResult.generated.h"

UENUM(BlueprintType)
enum class ESSPowerGaugeResult : uint8 {
    None,
    Win,
    Lose,
};

