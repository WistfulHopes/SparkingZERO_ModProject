#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowItemInvisibleType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowItemInvisibleType : uint8 {
    None,
    NoSelectItemData,
    ConditionHidden,
    SelectItemFunction,
};

