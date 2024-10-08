#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleControlMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleControlMode : uint8 {
    Pad,
    Com,
    Audience,
    Network,
};

