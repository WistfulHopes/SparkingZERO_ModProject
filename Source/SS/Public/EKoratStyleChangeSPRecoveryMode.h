#pragma once
#include "CoreMinimal.h"
#include "EKoratStyleChangeSPRecoveryMode.generated.h"

UENUM(BlueprintType)
enum class EKoratStyleChangeSPRecoveryMode : uint8 {
    Default,
    Max,
    TakeOver,
};

