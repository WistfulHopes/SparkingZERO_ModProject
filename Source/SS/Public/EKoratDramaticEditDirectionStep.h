#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditDirectionStep.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditDirectionStep : uint8 {
    EditMajorItem,
    EditTarget,
    EditDetail,
    EditDetail2,
    EditNumOfActivation,
};

