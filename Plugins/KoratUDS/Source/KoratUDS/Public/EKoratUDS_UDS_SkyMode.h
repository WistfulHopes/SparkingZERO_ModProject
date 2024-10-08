#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_SkyMode.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_SkyMode : uint8 {
    VolumetricClouds,
    StaticClouds,
    X2DDynamicClouds,
    NoClouds,
    VolumetricAurora,
};

