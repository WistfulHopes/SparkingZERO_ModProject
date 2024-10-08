#pragma once
#include "CoreMinimal.h"
#include "EKoratTargetPositionType.generated.h"

UENUM(BlueprintType)
enum class EKoratTargetPositionType : uint8 {
    MyPosition,
    OpponentPosition,
};

