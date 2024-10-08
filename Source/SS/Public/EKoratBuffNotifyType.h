#pragma once
#include "CoreMinimal.h"
#include "EKoratBuffNotifyType.generated.h"

UENUM(BlueprintType)
enum class EKoratBuffNotifyType : uint8 {
    None,
    Start,
    OneShotEvent,
    Finish,
};

