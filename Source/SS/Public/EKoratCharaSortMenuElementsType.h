#pragma once
#include "CoreMinimal.h"
#include "EKoratCharaSortMenuElementsType.generated.h"

UENUM(BlueprintType)
enum class EKoratCharaSortMenuElementsType : uint8 {
    None,
    Life,
    Blow,
    Energy,
    Rush,
    Blast,
    DP,
    Proficiency,
    Text,
    EventPoint,
    Default,
};

