#pragma once
#include "CoreMinimal.h"
#include "EScrollBarOnMouseType.generated.h"

UENUM(BlueprintType)
enum class EScrollBarOnMouseType : uint8 {
    None,
    Hover,
    Drag,
    Normal,
};

