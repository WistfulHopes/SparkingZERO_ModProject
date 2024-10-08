#pragma once
#include "CoreMinimal.h"
#include "EKoratPlayingTime.generated.h"

UENUM(BlueprintType)
enum class EKoratPlayingTime : uint8 {
    None,
    Range_00,
    Range_01,
    Range_02,
    Range_03,
    Range_04,
    Range_05,
    Num,
};

