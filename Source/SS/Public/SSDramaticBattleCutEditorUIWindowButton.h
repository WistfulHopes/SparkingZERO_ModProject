#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItem.h"
#include "SSDramaticBattleCutEditorUIWindowButton.generated.h"

class UImage;
class UPanelWidget;
class URichTextBlock;
class USSDramaticBattleCutEditorUIWindowButtonSelector;
class USSMenuButtonChip;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorUIWindowButton : public USSDramaticBattleCutEditorUIWindowItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowButtonSelector* MenuButtonSelector;
    
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
    USSMenuButtonChip* Arror10LeftWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonChip* Arror10RightWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText2Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SelectorParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonRichTextWidget;
    
public:
    USSDramaticBattleCutEditorUIWindowButton();

};

