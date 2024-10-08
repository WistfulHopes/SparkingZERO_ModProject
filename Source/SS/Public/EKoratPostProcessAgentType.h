#pragma once
#include "CoreMinimal.h"
#include "EKoratPostProcessAgentType.generated.h"

UENUM(BlueprintType)
enum class EKoratPostProcessAgentType : uint8 {
    CHAMELEON,
    POSTPROCESSVOLUME,
    CAMERA,
    MAX,
};

