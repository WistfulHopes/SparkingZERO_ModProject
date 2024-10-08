#pragma once
#include "CoreMinimal.h"
#include "ESSSoundGroupType.generated.h"

UENUM(BlueprintType)
enum class ESSSoundGroupType : uint8 {
    UI,
    SEBattle,
    BGM,
    Voice,
    EventVoice,
    SEEvent,
    SEMap,
    SoundGroupTypeNum,
    None = SoundGroupTypeNum,
};

