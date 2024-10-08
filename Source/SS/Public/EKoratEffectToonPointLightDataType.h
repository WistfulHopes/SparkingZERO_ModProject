#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectToonPointLightDataType.generated.h"

UENUM(BlueprintType)
enum class EKoratEffectToonPointLightDataType : uint8 {
    None,
    World,
    Aura,
    Shot,
    SmashShot,
    Blast1a,
    Blast1b,
    Blast2a,
    Blast2b,
    BlastU,
};

