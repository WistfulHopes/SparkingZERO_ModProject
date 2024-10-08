#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleAssistFinishType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleAssistFinishType : uint8 {
    None,
    DeltaHeavy,
    HeavyCrash,
    Max,
};

