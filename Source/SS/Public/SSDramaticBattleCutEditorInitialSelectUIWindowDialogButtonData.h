#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonFunctionType.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonFunctionType Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonData();
};

