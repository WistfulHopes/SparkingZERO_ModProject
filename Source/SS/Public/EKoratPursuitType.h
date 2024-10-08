#pragma once
#include "CoreMinimal.h"
#include "EKoratPursuitType.generated.h"

UENUM(BlueprintType)
enum class EKoratPursuitType : uint8 {
    None,
    DragonHoming,
    VanishingAttack,
    LightningAttack,
};

