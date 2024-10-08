#pragma once
#include "CoreMinimal.h"
#include "ESSCutCameraBlendLineType.generated.h"

UENUM(BlueprintType)
enum class ESSCutCameraBlendLineType : uint8 {
    SSCutCameraBlendLineNone,
    SSCutCameraBlendLineStraight,
    SSCutCameraBlendLineMax,
};

