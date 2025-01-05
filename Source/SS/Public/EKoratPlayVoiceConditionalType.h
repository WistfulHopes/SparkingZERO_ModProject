#pragma once
#include "CoreMinimal.h"
#include "EKoratPlayVoiceConditionalType.generated.h"

UENUM(BlueprintType)
enum class EKoratPlayVoiceConditionalType : uint8 {
    RemainingHP,
    RemainingTime,
};

