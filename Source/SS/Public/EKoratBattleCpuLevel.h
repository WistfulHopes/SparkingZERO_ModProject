#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCpuLevel.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCpuLevel : uint8 {
    None,
    Week,
    Usual,
    Strong,
    FierceGod,
};

