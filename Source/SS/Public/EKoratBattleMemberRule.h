#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleMemberRule.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleMemberRule : uint8 {
    None,
    Single,
    Team,
    DP,
};

