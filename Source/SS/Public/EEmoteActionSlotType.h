#pragma once
#include "CoreMinimal.h"
#include "EEmoteActionSlotType.generated.h"

UENUM(BlueprintType)
enum class EEmoteActionSlotType : uint8 {
    SlotA,
    SlotB,
    SlotC,
    SlotD,
    SlotSparking,
    Num,
    None,
};

