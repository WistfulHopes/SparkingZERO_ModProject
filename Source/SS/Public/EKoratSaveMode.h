#pragma once
#include "CoreMinimal.h"
#include "EKoratSaveMode.generated.h"

UENUM(BlueprintType)
enum class EKoratSaveMode : uint8 {
    Result,
    Battle,
    GiveUp,
    Num,
};

