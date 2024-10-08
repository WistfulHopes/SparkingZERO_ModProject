#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraBind.generated.h"

UENUM(BlueprintType)
enum class EBattleCameraBind : uint8 {
    EBattleCameraBindNon,
    EBattleCameraBindMy,
    EBattleCameraBindTarget,
    EBattleCameraBindMax,
};

