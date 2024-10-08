#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleWaitConditions.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleWaitConditions : uint8 {
    None,
    Skip,
    Wait,
};

