#pragma once
#include "CoreMinimal.h"
#include "EKoratBlowType.generated.h"

UENUM(BlueprintType)
enum class EKoratBlowType : uint8 {
    Normal,
    Roll,
    Screw,
    Lift,
    Sweep,
    Crumple,
};

