#pragma once
#include "CoreMinimal.h"
#include "ECameraAdditiveRotateInputMode.generated.h"

UENUM(BlueprintType)
enum class ECameraAdditiveRotateInputMode : uint8 {
    Normal,
    StaticWorld,
    AvoidTerrain,
    MAX,
};

