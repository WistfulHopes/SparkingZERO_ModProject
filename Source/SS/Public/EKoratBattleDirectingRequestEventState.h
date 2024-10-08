#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingRequestEventState.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingRequestEventState : uint8 {
    None,
    Begin,
    Running,
    End,
};

