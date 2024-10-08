#pragma once
#include "CoreMinimal.h"
#include "EBattleCineCameraSocket.generated.h"

UENUM(BlueprintType)
enum class EBattleCineCameraSocket : uint8 {
    EBattleCameraSocketNull,
    EBattleCameraSocketWast,
    EBattleCameraSocketHead,
    EBattleCameraSocketMax,
};

