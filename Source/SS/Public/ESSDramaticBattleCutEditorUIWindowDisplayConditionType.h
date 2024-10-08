#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowDisplayConditionType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowDisplayConditionType : uint8 {
    Visible,
    Hidden,
    NonSelectable,
    SituationSelectable,
};

