#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleHitStopRequestPlayer.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleHitStopRequestPlayer : uint8 {
    None,
    Own,
    Opponent,
};

