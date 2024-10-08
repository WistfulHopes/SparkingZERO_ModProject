#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCpuThinking.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCpuThinking : uint8 {
    None,
    Week,
    Usual,
    Strong,
    FierceGod,
};

