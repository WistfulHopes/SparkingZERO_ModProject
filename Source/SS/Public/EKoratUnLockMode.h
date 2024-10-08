#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.generated.h"

UENUM(BlueprintType)
enum class EKoratUnLockMode : uint8 {
    Lock,
    New,
    Checked,
};

