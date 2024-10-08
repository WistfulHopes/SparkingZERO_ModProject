#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticBattleCutEditorInitialSelectImageCategory.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticBattleCutEditorInitialSelectImageCategory : uint8 {
    None,
    Preset,
    UserScreenShot,
    Select2D,
    Select3D,
};

