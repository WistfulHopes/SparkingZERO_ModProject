#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockType.generated.h"

UENUM(BlueprintType)
enum class EKoratUnLockType : uint8 {
    Non,
    Test,
    Default,
    Shop,
    Mission,
    Dlc,
    Battle,
};

