#pragma once
#include "CoreMinimal.h"
#include "EKoratSuperZCounterTakeType.generated.h"

UENUM(BlueprintType)
enum class EKoratSuperZCounterTakeType : uint8 {
    None,
    Take,
    Catch,
    Flick,
    DrownOut,
    Teleport,
    Absorption,
};

