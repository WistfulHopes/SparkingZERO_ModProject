#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItem.h"
#include "SSDramaticBattleCutEditorUIWindowLabel.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorUIWindowLabel : public USSDramaticBattleCutEditorUIWindowItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonTextWidget;
    
public:
    USSDramaticBattleCutEditorUIWindowLabel();

};

