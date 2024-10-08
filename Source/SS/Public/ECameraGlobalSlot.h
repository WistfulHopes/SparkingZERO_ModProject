#pragma once
#include "CoreMinimal.h"
#include "ECameraGlobalSlot.generated.h"

UENUM(BlueprintType)
enum class ECameraGlobalSlot : uint8 {
    MAIN_SLOT,
    SUB_SLOT_0,
    SUB_SLOT_1,
    SUB_SLOT_2,
    SUB_SLOT_3,
    SUB_SLOT_4,
    SUB_SLOT_5,
    SUB_SLOT_6,
    SUB_SLOT_7,
    SUB_SLOT_8,
    GLOBAL_SLOT_MAX UMETA(Hidden),
};

