#pragma once
#include "CoreMinimal.h"
#include "EKoratBattlePauseMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattlePauseMode : uint8 {
    Normal,
    Training,
    BattleTraining,
    Practice,
    Tutorial,
};

