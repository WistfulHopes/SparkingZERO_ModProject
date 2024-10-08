#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneSetupType.generated.h"

UENUM(BlueprintType)
enum class ESSEventSceneSetupType : uint8 {
    Fullscreen,
    Windowed,
    AutomationCapture,
};

