#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDamageCorrection.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDamageCorrection : uint8 {
    Normal,
    Single,
    DP,
};

