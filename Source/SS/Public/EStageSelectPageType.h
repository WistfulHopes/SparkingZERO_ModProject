#pragma once
#include "CoreMinimal.h"
#include "EStageSelectPageType.generated.h"

UENUM(BlueprintType)
enum class EStageSelectPageType : uint8 {
    Stage,
    Bgm,
    Rule,
    Invalid,
};

