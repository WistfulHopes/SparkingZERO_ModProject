#pragma once
#include "CoreMinimal.h"
#include "EAtomLoopSetting.generated.h"

UENUM(BlueprintType)
enum class EAtomLoopSetting : uint8 {
    Inherited,
    Loop,
    OneShot,
};

