#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterBlastBoostStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterBlastBoostStatus : uint8 {
    None,
    WaitInputBlastBoost,
    NormalBlastBoost,
    SparkingBlastBoost,
};

