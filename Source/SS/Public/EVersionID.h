#pragma once
#include "CoreMinimal.h"
#include "EVersionID.generated.h"

UENUM(BlueprintType)
enum class EVersionID : uint8 {
    None,
    Development,
    Exhibition1 = 10,
    Exhibition2,
    Exhibition3,
    Exhibition4,
    Trial = 20,
    CBT = 30,
    OBT = 40,
    PreMaster = 50,
    Products = 60,
    DLC1 = 70,
    DLC2,
    DLC3,
    DLC4,
    Season1 = 100,
    Season2,
    Season3,
    Season4,
    Season5,
    Season6,
    Season7,
    Season8,
    Season9,
    Season10,
    Season11,
    Season12,
    Season13,
    Season14,
    Season15,
    Season16,
};

