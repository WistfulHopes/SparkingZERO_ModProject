#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_SkyLightMode.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_SkyLightMode : uint8 {
    CaptureBased,
    CustomCubemap,
    CubemapWithDynamicColorTinting,
};

