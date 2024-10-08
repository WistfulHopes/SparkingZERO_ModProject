#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIType : uint8 {
    None,
    UIWindow,
    Timeline,
    SceneView,
    InitialSelect,
    Picture,
};

