#pragma once
#include "CoreMinimal.h"
#include "ECameraBindingType.generated.h"

UENUM(BlueprintType)
enum class ECameraBindingType : uint8 {
    NONE,
    OWNER,
    ANOTHER,
    MCAMERA,
    MTARGET,
    START,
    EVENT,
    NPC,
    ORIGIN,
    MAX,
};

