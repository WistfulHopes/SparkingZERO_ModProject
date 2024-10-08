#pragma once
#include "CoreMinimal.h"
#include "EBattleCineCameraBind.generated.h"

UENUM(BlueprintType)
enum class EBattleCineCameraBind : uint8 {
    EBattleCameraBindNon,
    EBattleCameraBindMy,
    EBattleCameraBindTarget,
    EBattleCameraBindMax,
};

