#pragma once
#include "CoreMinimal.h"
#include "ECharacterVoiceStatus.generated.h"

UENUM(BlueprintType)
enum class ECharacterVoiceStatus : uint8 {
    Failed,
    BeforePlayback,
    Playing,
    AfterPlayback,
};

