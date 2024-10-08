#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowTimeLineUpdateDelayType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowTimeLineUpdateDelayType : uint8 {
    None,
    Character,
    Pose,
    Facial,
    EffectActive,
    Camera,
    Subtitle,
    BGM,
    SlowPosition,
};

