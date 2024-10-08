#pragma once
#include "CoreMinimal.h"
#include "ESSBulletStatusAtStart.generated.h"

UENUM(BlueprintType)
enum class ESSBulletStatusAtStart : uint8 {
    Homing,
    NoHomingUpdate,
    UnHoming,
    Stop,
    Trace,
    ChargeAndHoming,
    ChargeAndUnHoming,
    ChargeAndStop,
    ChargeAndTrace,
};

