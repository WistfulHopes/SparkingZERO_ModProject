#pragma once
#include "CoreMinimal.h"
#include "EShowFromCameraMode.generated.h"

UENUM(BlueprintType)
enum class EShowFromCameraMode : uint8 {
    FirstPerson,
    Performance,
    AllCamera,
    NoCamera,
    MAX,
};

