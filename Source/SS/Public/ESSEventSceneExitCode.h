#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneExitCode.generated.h"

UENUM(BlueprintType)
enum class ESSEventSceneExitCode : uint8 {
    DEFAULT,
    CHOSE_TOP = DEFAULT,
    CHOSE_BOTTOM,
    CHOSE_LEFT,
    CHOSE_RIGHT,
    INVALID,
};

