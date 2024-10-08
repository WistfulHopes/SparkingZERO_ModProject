#pragma once
#include "CoreMinimal.h"
#include "EBattleImpactPhase.generated.h"

UENUM(BlueprintType)
enum class EBattleImpactPhase : uint8 {
    kEnd,
    kBegin,
    kIntroduction,
    kWait,
    kGame,
    kConclusion,
    kFinish,
    kNum,
};

