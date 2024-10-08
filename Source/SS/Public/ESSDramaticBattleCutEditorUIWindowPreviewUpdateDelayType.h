#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowPreviewUpdateDelayType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowPreviewUpdateDelayType : uint8 {
    None,
    Character,
    Pose,
    Facial,
    EffectActive,
    Camera,
    Layer,
};

