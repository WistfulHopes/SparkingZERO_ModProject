#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorFunctionOperationType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorFunctionOperationType : uint8 {
    None,
    Unimplemented,
    Execute,
    Select,
    Label,
    RichText,
    HorizontalSelector,
    VHSelector,
    List,
    Toggle,
    Check,
};

