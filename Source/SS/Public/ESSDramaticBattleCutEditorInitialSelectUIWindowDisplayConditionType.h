#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionType : uint8 {
    Visible,
    Hidden,
    NonSelectable,
    SituationSelectable,
};

