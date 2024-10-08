#pragma once
#include "CoreMinimal.h"
#include "EBattleImpactCharacterState.generated.h"

UENUM(BlueprintType)
enum class EBattleImpactCharacterState : uint8 {
    kNone,
    kBattle,
    kWinner,
    kLoser,
    kNum,
};

