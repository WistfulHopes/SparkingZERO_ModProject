#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraLookAtType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraLookAtType : uint8 {
    KoratBattleCameraLookAtTypeNon,
    KoratBattleCameraLookAtTypeMy,
    KoratBattleCameraLookAtTypeTarget,
    KoratBattleCameraLookAtTypeMtoT,
    KoratBattleCameraLookAtTypeTargetActor,
    KoratBattleCameraLookAtTypeMax,
};

