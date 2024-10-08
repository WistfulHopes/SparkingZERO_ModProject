#pragma once
#include "CoreMinimal.h"
#include "EKoratWindSpeedClass.generated.h"

UENUM(BlueprintType)
enum class EKoratWindSpeedClass : uint8 {
    Calm,
    LightBreeze,
    GentleBreeze,
    ModerateBreeze,
    FreshBreeze,
    StrongBreeze,
    Storm,
};

