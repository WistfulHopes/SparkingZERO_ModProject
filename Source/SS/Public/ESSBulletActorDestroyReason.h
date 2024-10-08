#pragma once
#include "CoreMinimal.h"
#include "ESSBulletActorDestroyReason.generated.h"

UENUM(BlueprintType)
enum class ESSBulletActorDestroyReason : uint8 {
    ExternalErase,
    LifeSpanEnd,
    HitCharacter,
    BeamHitCharacter,
    HitGeometory,
    Clash,
    UnReflected,
};

