#pragma once
#include "CoreMinimal.h"
#include "EBattleSettleTransitionType.generated.h"

UENUM(BlueprintType)
enum class EBattleSettleTransitionType : uint8 {
    None,
    KnockOut,
    DoubleKnockOut,
    Event,
    TimeUp,
    Draw,
    RingOut,
    Giveup,
};

