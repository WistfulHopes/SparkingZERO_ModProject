#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticButtlleNewCutEditorSettingInnerCategory.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticButtlleNewCutEditorSettingInnerCategory : uint8 {
    None,
    CutType,
    Cut3D,
    Cut2D,
    LayoutChara,
    LayoutPose,
    LayoutFacial,
    LayoutAura,
    LayoutEffect,
    LayoutStrongAura,
    CaptionTalker,
    CaptionText,
    SlowStartSec,
    SlowInCamera,
    DustColor,
    SlowStartEffect,
    ThumbnailImage,
};

