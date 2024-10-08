#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleNewCutEditorCommonUiType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleNewCutEditorCommonUiType : uint8 {
    None,
    FoldEditWindow,
    DimensionSelectWindow,
    CutSelect2DWindow,
    CutSelect3DWindow,
    TextSubWindow,
    MultiLineTextSubWindow,
    BGMSubWindow,
    LayoutCharaWindow,
};

