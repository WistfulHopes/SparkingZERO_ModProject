#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonData.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDialogData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorInitialSelectUIWindowDialogButtonData> Buttons;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowDialogData();
};

