#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticSceneListDecideStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticSceneListDecideStatus : uint8 {
    None,
    ScenePanel,
    NewCreate,
    Max,
};

