#pragma once
#include "CoreMinimal.h"
#include "EKoratTutorialMode.generated.h"

UENUM(BlueprintType)
enum class EKoratTutorialMode : uint8 {
    None,
    Movie,
    End,
    Num,
};

