#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleSearchStatus : uint8 {
    None,
    Lockon,
    Lost,
    Aim,
};

