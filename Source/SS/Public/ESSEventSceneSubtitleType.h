#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneSubtitleType.generated.h"

UENUM(BlueprintType)
enum class ESSEventSceneSubtitleType : uint8 {
    None,
    PT,
    TS,
    Num,
};

