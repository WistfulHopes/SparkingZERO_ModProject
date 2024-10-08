#pragma once
#include "CoreMinimal.h"
#include "ESimpleStageSelectPageType.generated.h"

UENUM(BlueprintType)
enum class ESimpleStageSelectPageType : uint8 {
    Stage,
    Bgm,
    Rule,
    Max,
};

