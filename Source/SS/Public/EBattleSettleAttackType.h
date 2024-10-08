#pragma once
#include "CoreMinimal.h"
#include "EBattleSettleAttackType.generated.h"

UENUM(BlueprintType)
enum class EBattleSettleAttackType : uint8 {
    None,
    Rush,
    Smash,
    Heavy,
    Kidan,
    Blast,
    Demo,
    ShotBlast,
    ChargeBlast,
};

