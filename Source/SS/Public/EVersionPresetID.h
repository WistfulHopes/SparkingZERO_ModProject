#pragma once
#include "CoreMinimal.h"
#include "EVersionPresetID.generated.h"

UENUM(BlueprintType)
enum class EVersionPresetID : uint8 {
    None,
    Development,
    Regident,
    BT,
    MainGame,
    Exhibition1,
    Trial,
    CBT,
    OBT,
    PreMaster,
    Products,
};

