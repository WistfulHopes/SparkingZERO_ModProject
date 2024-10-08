#pragma once
#include "CoreMinimal.h"
#include "ESSAiDefenseType.generated.h"

UENUM(BlueprintType)
enum class ESSAiDefenseType : uint8 {
    Weak,
    Normal,
    Strong,
    WeakSearchOff,
    NormalSearchOff,
    StrongSearchOff,
    Max,
};

