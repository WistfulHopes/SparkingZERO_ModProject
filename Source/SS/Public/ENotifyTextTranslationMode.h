#pragma once
#include "CoreMinimal.h"
#include "ENotifyTextTranslationMode.generated.h"

UENUM(BlueprintType)
enum class ENotifyTextTranslationMode : uint8 {
    None,
    TextTable,
    NumericInt,
    NumericFloat,
    TextWithInt,
    TextWithFloat,
    TextNest,
    MissionId,
    SimpleText,
    CharacterId,
    CharacterItemId,
};

