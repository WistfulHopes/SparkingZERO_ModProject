#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectToonPointLightGroupType.generated.h"

UENUM(BlueprintType)
enum class EKoratEffectToonPointLightGroupType : uint8 {
    None,
    World,
    Equipment,
    Aura,
};

