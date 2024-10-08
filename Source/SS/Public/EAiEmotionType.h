#pragma once
#include "CoreMinimal.h"
#include "EAiEmotionType.generated.h"

UENUM(BlueprintType)
enum class EAiEmotionType : uint8 {
    None,
    Aggression,
    Cautiousness,
    SenseOfSuperiority,
    Fear,
    Selflessness,
    Vigilance,
    IntentToMurder,
    Impatience,
};

