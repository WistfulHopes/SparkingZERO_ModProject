#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchFactor.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleSearchFactor : uint8 {
    None,
    Damage,
    Sense,
    Auto,
    Aim,
};

