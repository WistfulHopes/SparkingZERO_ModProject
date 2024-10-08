#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionEffectType.generated.h"

UENUM(BlueprintType)
enum class EKoratDestructionEffectType : uint8 {
    None,
    Destruction,
    Hit,
    Collision,
};

