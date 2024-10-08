#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemCategory.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemCategory : uint8 {
    None,
    PowerUp,
    Costume,
    Equipment,
    EntryAction,
    EntryVoice,
    VictoryAction,
    VictoryVoice,
    AppealAction,
    AppealVoice,
    Fusion,
    Potara,
    SparkingBGM,
    AIType,
    AILevel,
    Emote,
    Controll,
};

