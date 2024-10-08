#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleCutEditorUIWindowPreviewPanel.generated.h"

class ASSDramaticBattleCutEditorUIWindowController;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorUIWindowPreviewPanel : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CharaNameTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ContentsTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorUIWindowController* UIController;
    
public:
    USSDramaticBattleCutEditorUIWindowPreviewPanel();

};

