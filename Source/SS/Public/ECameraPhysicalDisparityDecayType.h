#pragma once
#include "CoreMinimal.h"
#include "ECameraPhysicalDisparityDecayType.generated.h"

UENUM(BlueprintType)
enum class ECameraPhysicalDisparityDecayType : uint8 {
    Normal,
    Equal,
    Add10P,
    Add20P,
    Add30P,
    Add40P,
    Add50P,
    Add60P,
    Add70P,
    Add80P,
    Add90P,
    Add100P,
    MAX,
};

