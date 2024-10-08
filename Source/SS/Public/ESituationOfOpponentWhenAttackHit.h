#pragma once
#include "CoreMinimal.h"
#include "ESituationOfOpponentWhenAttackHit.generated.h"

UENUM(BlueprintType)
enum class ESituationOfOpponentWhenAttackHit : uint8 {
    Hit,
    Guard,
    GuardBreak,
    AttackBreak,
    Ascertain,
    SuperZCounter,
    SuperCounter,
    Selfishness,
    SuperArmor,
    HyperArmor,
    SparkingArmor,
    ReactionArmor,
    OffsetArmor,
};

