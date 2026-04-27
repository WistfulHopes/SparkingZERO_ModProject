#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleMemberRuleSaveType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleMemberRuleSaveType : uint8 {
    Single,
    Team,
    DP,
    Num,
};

