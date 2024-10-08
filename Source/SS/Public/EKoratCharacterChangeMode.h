#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterChangeMode.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterChangeMode : uint8 {
    None,
    StyleChange,
    Fusion,
    Potara,
    TeamMemberChange,
    DamageCostume,
};

