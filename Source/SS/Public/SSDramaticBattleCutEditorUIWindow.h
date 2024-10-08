#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleCutEditorUIWindow.generated.h"

class ASSDramaticBattleCutEditorUIWindowController;
class USSDramaticBattleCutEditorUIWindowButton;
class USSDramaticBattleCutEditorUIWindowLabel;
class USSDramaticBattleCutEditorUIWindowScrollBox;
class USSMenuButton;
class USSRemoteButton;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorUIWindow : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawPositionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawPositionStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* WindowTitleTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowScrollBox* ScrollBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* HeaderSwitcherWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* HeaderButtonLeftWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* HeaderButtonRightWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ActiveEffectSwitcherWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorUIWindowController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusedSelectButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorUIWindowButton*> SelectButtonWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticBattleCutEditorUIWindowLabel*> LabelWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList ListTemplateItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleFilterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectableItemIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowButton* LastFocusedButton;
    
public:
    USSDramaticBattleCutEditorUIWindow();

    UFUNCTION(BlueprintCallable)
    void SetWindowActiveEffect(bool InIsActirve);
    
    UFUNCTION(BlueprintCallable)
    void PrepareGoback();
    
    UFUNCTION(BlueprintCallable)
    void OnFilterChangedRight();
    
    UFUNCTION(BlueprintCallable)
    void OnFilterChangedLeft();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFocusedWidgetIndexFromDataIndex(int32 InCheckDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void DecidePanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangePanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

