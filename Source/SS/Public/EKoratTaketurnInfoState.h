#pragma once
#include "CoreMinimal.h"
#include "EKoratTaketurnInfoState.generated.h"

UENUM(BlueprintType)
enum class EKoratTaketurnInfoState : uint8 {
    WaitTaketurn,
    CheckBegin,
    CheckLast,
    Finished,
};

