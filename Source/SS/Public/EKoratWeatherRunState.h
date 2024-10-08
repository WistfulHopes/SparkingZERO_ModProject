#pragma once
#include "CoreMinimal.h"
#include "EKoratWeatherRunState.generated.h"

UENUM(BlueprintType)
enum class EKoratWeatherRunState : uint8 {
    Uninitialize,
    Initialize,
    Normal,
    Num,
};

