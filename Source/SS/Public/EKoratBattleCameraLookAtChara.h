#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraLookAtChara.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraLookAtChara : uint8 {
    KoratBattleCameraLookAtCharaMy,
    KoratBattleCameraLookAtCharaTarget,
    KoratBattleCameraLookAtCharaPos,
    KoratBattleCameraLookAtCharaMax,
};

