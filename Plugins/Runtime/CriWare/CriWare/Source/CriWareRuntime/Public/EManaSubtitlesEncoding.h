#pragma once
#include "CoreMinimal.h"
#include "EManaSubtitlesEncoding.generated.h"

UENUM(BlueprintType)
enum class EManaSubtitlesEncoding : uint8 {
    Default,
    ANSI,
    Utf8,
    Utf16,
};

