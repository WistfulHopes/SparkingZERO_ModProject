#pragma once
#include "CoreMinimal.h"
#include "ESSAiEmotionTargetType.generated.h"

UENUM(BlueprintType)
enum class ESSAiEmotionTargetType : uint8 {
    Myself,
    Target,
};

