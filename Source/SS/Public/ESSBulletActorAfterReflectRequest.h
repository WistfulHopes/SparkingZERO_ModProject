#pragma once
#include "CoreMinimal.h"
#include "ESSBulletActorAfterReflectRequest.generated.h"

UENUM(BlueprintType)
enum class ESSBulletActorAfterReflectRequest : uint8 {
    None,
    ReflectAfterTimeup,
    StopAfterTimeup,
    FinishAfterTimeup,
};

