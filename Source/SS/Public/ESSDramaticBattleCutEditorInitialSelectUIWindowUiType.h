#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowUiType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorInitialSelectUIWindowUiType : uint8 {
    None,
    EditWindow,
    EditWindowButton,
    EditWindowLabel,
    PreviewPanel,
    GeneralDialog,
    ButtonGuide,
    InitialSelectCutSelect,
    InitialSelect3DSelect,
    InitialSelect3DButton,
    InitialSelect2DSelect,
    InitialSelect2DButton,
    InitialSelectExtra_001,
    InitialSelectExtra_002,
    InitialSelectExtra_003,
};

