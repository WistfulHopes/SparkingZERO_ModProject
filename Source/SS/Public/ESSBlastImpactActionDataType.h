#pragma once
#include "CoreMinimal.h"
#include "ESSBlastImpactActionDataType.generated.h"

UENUM(BlueprintType)
enum class ESSBlastImpactActionDataType : uint8 {
    kStart,
    kCollision,
    kWin,
    kLose,
};

