#pragma once
#include "CoreMinimal.h"
#include "EKoratImageDataResizeMode.generated.h"

UENUM(BlueprintType)
enum class EKoratImageDataResizeMode : uint8 {
    None,
    ResizeEnd,
    Num,
};

