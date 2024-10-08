#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorSceneViewUiType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorSceneViewUiType : uint8 {
    None,
    ThumbnailImage,
    ThumbnailText,
    ButtonGuide,
    CaptureActor,
    WindowEventSceneText,
    AutomationCaptureWaiting,
    AutomationCaptureUpdateMessag,
};

