#pragma once
#include "CoreMinimal.h"
#include "EKoratPostEditBattleStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratPostEditBattleStatus : uint8 {
    None,
    Success,
    Failure,
    Cancel,
};

