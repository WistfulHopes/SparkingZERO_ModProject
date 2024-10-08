#pragma once
#include "CoreMinimal.h"
#include "EKoratShopUnLockType.generated.h"

UENUM(BlueprintType)
enum class EKoratShopUnLockType : uint8 {
    None,
    Default,
    Param,
    Dlc,
    Server,
};

