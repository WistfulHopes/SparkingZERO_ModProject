#pragma once
#include "CoreMinimal.h"
#include "EKoratEachCharacterUnderWaterStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratEachCharacterUnderWaterStatus : uint8 {
    None,
    Self,
    Opponent,
    Both,
};

