#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_LensFlareType.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_LensFlareType : uint8 {
    ZoomChromatic,
    Anamorphic,
    X35mmPrime,
};

