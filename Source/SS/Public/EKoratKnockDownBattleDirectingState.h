#pragma once
#include "CoreMinimal.h"
#include "EKoratKnockDownBattleDirectingState.generated.h"

UENUM(BlueprintType)
enum class EKoratKnockDownBattleDirectingState : uint8 {
    None,
    Idle,
    Running,
};

