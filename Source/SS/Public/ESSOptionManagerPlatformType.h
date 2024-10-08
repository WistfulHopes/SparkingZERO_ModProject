#pragma once
#include "CoreMinimal.h"
#include "ESSOptionManagerPlatformType.generated.h"

UENUM(BlueprintType)
enum class ESSOptionManagerPlatformType : uint8 {
    Auto,
    Steam,
    Ps5,
    XSX,
};

