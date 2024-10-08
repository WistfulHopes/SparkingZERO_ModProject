#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditTriggerMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditTriggerMode : uint8 {
    NormalDirection,
    SpecialEndingWin,
    SpecialEndingLose,
};

