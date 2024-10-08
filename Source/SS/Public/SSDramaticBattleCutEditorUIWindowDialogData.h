#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowDialogButtonData.h"
#include "SSDramaticBattleCutEditorUIWindowDialogData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorUIWindowDialogButtonData> Buttons;
    
    SS_API FSSDramaticBattleCutEditorUIWindowDialogData();
};

