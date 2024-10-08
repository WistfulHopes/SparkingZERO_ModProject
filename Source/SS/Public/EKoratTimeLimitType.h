#pragma once
#include "CoreMinimal.h"
#include "EKoratTimeLimitType.generated.h"

UENUM(BlueprintType)
enum class EKoratTimeLimitType : uint8 {
    None,
    LimitSec90,
    LimitSec120,
    LimitSec180,
    LimitSec240,
    LimitSec300,
    LimitSec360,
    LimitSec600,
    NoLimit,
    Invalid,
};

