#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraBlendType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraBlendType : uint8 {
    KoratBattleCameraBlendTypeLinear,
    KoratBattleCameraBlendTypeEaseIn,
    KoratBattleCameraBlendTypeEaseOut,
    KoratBattleCameraBlendTypeEaseInOut,
    KoratBattleCameraBlendTypeSigmoid,
    KoratBattleCameraBlendTypeMax,
};

