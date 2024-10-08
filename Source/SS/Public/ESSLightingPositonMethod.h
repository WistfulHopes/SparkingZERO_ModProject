#pragma once
#include "CoreMinimal.h"
#include "ESSLightingPositonMethod.generated.h"

UENUM(BlueprintType)
enum class ESSLightingPositonMethod : uint8 {
    ActorLocation,
    ToonLocation,
    MeshLocation,
    MeshBounds,
    BoneLocation,
};

