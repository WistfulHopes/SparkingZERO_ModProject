#pragma once
#include "CoreMinimal.h"
#include "EKoratArmorHitEffectType.generated.h"

UENUM(BlueprintType)
enum class EKoratArmorHitEffectType : uint8 {
    Hit,
    Armor,
    HitTypeArmor,
};

