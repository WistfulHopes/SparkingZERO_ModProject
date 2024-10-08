#pragma once
#include "CoreMinimal.h"
#include "EPlaySoundFromCameraMode.generated.h"

UENUM(BlueprintType)
enum class EPlaySoundFromCameraMode : uint8 {
    FirstPerson,
    Performance,
    MAX,
};

