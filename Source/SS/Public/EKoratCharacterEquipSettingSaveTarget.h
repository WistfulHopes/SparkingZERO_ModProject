#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterEquipSettingSaveTarget.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterEquipSettingSaveTarget : uint8 {
    Player,
    Player2,
    Com1,
    Com2,
    Num,
    Invalid,
};

