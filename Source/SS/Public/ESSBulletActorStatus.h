#pragma once
#include "CoreMinimal.h"
#include "ESSBulletActorStatus.generated.h"

UENUM(BlueprintType)
enum class ESSBulletActorStatus : uint8 {
    Initial,
    Begin,
    Charge,
    MoveBullet,
    MoveBulletNoHomingUpdate,
    MoveBulletUnHoming,
    Stop,
    Trace,
    MoveByController,
    Captured,
    Reflect,
    WaitForReflected,
    UnReflected,
    DoNothing,
    LifeSpanEnd,
    MultiHitStartCharacter,
    MultiHitCharacter,
    LastHitCharacter,
    BeamHitCharacter,
    MultiHitStartGeometry,
    MultiHitGeometry,
    LastHitGeometry,
    Clash,
    WaitForDestroy,
};

