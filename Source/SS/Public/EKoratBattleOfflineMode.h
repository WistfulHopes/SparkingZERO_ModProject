#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleOfflineMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleOfflineMode : uint8 {
    SingleBattle,
    TeamBattle,
    DPBattle,
    Tenkaichi,
    Invalid,
};

