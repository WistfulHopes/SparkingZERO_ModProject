#pragma once
#include "CoreMinimal.h"
#include "ELerpType.generated.h"

UENUM(BlueprintType)
enum class ELerpType : uint8 {
    Linear,
    EaseIn,
    EaseOut,
    EaseInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    CircularIn,
    CircularOut,
    CircularInOut,
    MAX,
};

