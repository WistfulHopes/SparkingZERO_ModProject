#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowDialogButtonFunctionType.h"
#include "SSDramaticBattleCutEditorUIWindowDialogButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowDialogButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorUIWindowDialogButtonFunctionType Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    SS_API FSSDramaticBattleCutEditorUIWindowDialogButtonData();
};

