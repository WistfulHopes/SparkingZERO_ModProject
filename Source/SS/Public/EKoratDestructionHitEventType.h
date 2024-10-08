#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionHitEventType.generated.h"

UENUM(BlueprintType)
enum class EKoratDestructionHitEventType : uint8 {
    Hit,
    Overlay,
};

