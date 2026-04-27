#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleMemberRuleMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleMemberRuleMode : uint8 {
    None,
    NSRBruteForce,
    NSRUnlimited,
    Num,
};

