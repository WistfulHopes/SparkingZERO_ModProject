#pragma once
#include "CoreMinimal.h"
#include "ESSTriggerEffectMode.generated.h"

UENUM()
enum class ESSTriggerEffectMode : int32 {
    kOFF,
    kFeedback,
    kWeapon,
    kVibration,
    kMultipleFeedback,
    kMultipleVibration,
};

