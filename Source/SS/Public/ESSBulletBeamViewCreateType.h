#pragma once
#include "CoreMinimal.h"
#include "ESSBulletBeamViewCreateType.generated.h"

UENUM(BlueprintType)
enum class ESSBulletBeamViewCreateType : uint8 {
    Debug,
    Bullet,
    TraceActor,
    StartEnd,
};

