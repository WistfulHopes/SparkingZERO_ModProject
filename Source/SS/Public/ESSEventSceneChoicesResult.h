#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneChoicesResult.generated.h"

UENUM(BlueprintType)
enum class ESSEventSceneChoicesResult : uint8 {
    TOP,
    BOTTOM,
    LEFT,
    RIGHT,
};

