#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraSocket.generated.h"

UENUM(BlueprintType)
enum class EBattleCameraSocket : uint8 {
    EBattleCameraSocketNull,
    EBattleCameraSocketWast,
    EBattleCameraSocketHead,
    EBattleCameraSocketMax,
};

