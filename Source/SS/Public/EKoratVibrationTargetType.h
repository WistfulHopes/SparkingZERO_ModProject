#pragma once
#include "CoreMinimal.h"
#include "EKoratVibrationTargetType.generated.h"

UENUM(BlueprintType)
enum class EKoratVibrationTargetType : uint8 {
    None,
    Self,
    Opponent,
    Both,
};

