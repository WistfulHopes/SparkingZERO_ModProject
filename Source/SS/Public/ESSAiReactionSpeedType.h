#pragma once
#include "CoreMinimal.h"
#include "ESSAiReactionSpeedType.generated.h"

UENUM(BlueprintType)
enum class ESSAiReactionSpeedType : uint8 {
    CombativesGuard,
    BulletGuard,
    FastAvoidance,
    ZCounter,
    SuperCounter,
    ThrowEscape,
    Ascertain,
    SuperAscertain,
    BlownAwayReaction,
    RushHighSpeedMoveCounter,
    CrashImpact,
    Max,
};

