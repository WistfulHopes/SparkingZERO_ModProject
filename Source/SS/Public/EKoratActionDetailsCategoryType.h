#pragma once
#include "CoreMinimal.h"
#include "EKoratActionDetailsCategoryType.generated.h"

UENUM(BlueprintType)
enum class EKoratActionDetailsCategoryType : uint8 {
    Undefined,
    ActRFM,
    ActSM,
    ActVAA,
    ActVAS,
    ActHSE,
    ActSZCV,
    ActZCO,
    ActRFMC,
    ActCRF,
};

