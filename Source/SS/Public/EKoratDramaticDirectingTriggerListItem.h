#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticDirectingTriggerListItem.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticDirectingTriggerListItem : uint8 {
    None,
    Unconditional,
    KnockDown,
    KnockDownBlast1,
    KnockDownBlast2,
    KnockDownUB,
    MoreHPGauge,
    LseeHPGauge,
    InstantHPGauge,
    ElapsedTime,
    OnTime,
    BeyondTime,
    RemaingTime,
    ActionHit,
    DefendAttack,
    ActionNoHit,
    StateChanged,
    CurrentState,
    FormChanged,
    CurrentForm,
    Taketurns,
    ActionEnd,
    Emote,
    ActionStart,
};

