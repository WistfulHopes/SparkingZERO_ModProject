#pragma once
#include "CoreMinimal.h"
#include "EKoratCommonOnOffType.generated.h"

UENUM(BlueprintType)
enum class EKoratCommonOnOffType : uint8 {
    None = 255,
    ON = 0,
    OFF,
    Max,
    Invalid,
};

