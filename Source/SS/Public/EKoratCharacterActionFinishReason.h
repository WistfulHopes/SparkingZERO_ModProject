#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterActionFinishReason.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterActionFinishReason : uint8 {
    Other,
    DamageCancel,
    PlayToEnd,
};

