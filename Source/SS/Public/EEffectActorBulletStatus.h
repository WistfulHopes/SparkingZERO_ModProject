#pragma once
#include "CoreMinimal.h"
#include "EEffectActorBulletStatus.generated.h"

UENUM(BlueprintType)
enum class EEffectActorBulletStatus : uint8 {
    None,
    Launching,
    StartBlastImpact,
    DuringBlastImpact,
    WinBlastImpact,
    LoseBlastImpact,
    Repel,
    Discrete,
    Absorption,
    Reject,
};

