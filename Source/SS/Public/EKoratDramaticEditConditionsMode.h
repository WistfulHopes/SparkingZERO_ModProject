#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditConditionsMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditConditionsMode : uint8 {
    None,
    TriggerText,
    DirectingText,
    ConditionsActionText,
    ActivateActionText,
    ConditonInputText,
    ConversationSpeaker,
    ConversationBaseText,
    ConversationRwplaceWord,
    BGMNameText,
    TargetText,
    StatusText,
    BuffText,
    AiText,
};

