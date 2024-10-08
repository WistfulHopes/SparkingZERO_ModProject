#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingTrigger.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingTrigger : uint8 {
    None,
    Unconditional,
    HPGauge,
    ElapsedTime,
    BeyondTime,
    OnTime,
    KnockDown,
    ActionStart,
    ActionEnd,
    ActionHit,
    ActionNoHit,
    DefendAttack,
    SuperAscertainSuccess,
    Combination,
    RemaingTime,
    RemaingTimeHP,
    KnockDownHP,
    StateChanged,
    CurrentState,
    FormChanged,
    CurrentForm,
    Taketurns,
    Emote,
    Distance,
    FullPowerSmashDamageRange,
    WeakRetry,
    UseOrb,
    AfterTutorialSpeedImpact,
};

