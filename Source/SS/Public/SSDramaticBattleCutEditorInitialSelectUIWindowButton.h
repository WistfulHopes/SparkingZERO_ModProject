#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowItem.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowButton.generated.h"

class UImage;
class UPanelWidget;
class URichTextBlock;
class USSDramaticBattleCutEditorInitialSelectUIWindowButtonSelector;
class USSMenuButtonChip;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorInitialSelectUIWindowButton : public USSDramaticBattleCutEditorInitialSelectUIWindowItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowButtonSelector* MenuButtonSelector;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BaseSwitcherWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* SwitcherWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ArrorLowerLevelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText0Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText1Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonChip* ArrorLeftWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonChip* ArrorRightWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText2Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SelectorParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonRichTextWidget;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowButton();

};

