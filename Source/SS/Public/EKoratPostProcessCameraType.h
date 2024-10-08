#pragma once
#include "CoreMinimal.h"
#include "EKoratPostProcessCameraType.generated.h"

UENUM(BlueprintType)
enum class EKoratPostProcessCameraType : uint8 {
    ALL,
    SELF,
    OPPOMENT,
};

