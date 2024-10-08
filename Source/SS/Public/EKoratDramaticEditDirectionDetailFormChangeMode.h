#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditDirectionDetailFormChangeMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditDirectionDetailFormChangeMode : uint8 {
    FormChange,
    FusionPotaraChange,
    AllChange,
    AllChangeWithCurrent,
};

