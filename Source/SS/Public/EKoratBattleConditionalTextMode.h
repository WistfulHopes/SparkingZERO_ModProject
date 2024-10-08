#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleConditionalTextMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleConditionalTextMode : uint8 {
    Clear,
    Another,
    Defeat,
    OrbAnother,
};

