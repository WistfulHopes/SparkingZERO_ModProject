#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingOneShotDeadlyOrder.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingOneShotDeadlyOrder : uint8 {
    None,
    Player1,
    Player2,
    Both,
};

