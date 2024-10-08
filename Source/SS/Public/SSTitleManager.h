#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SSMenuManager.h"
#include "SSTitleManager.generated.h"

class UCanvasPanel;
class UImage;
class USSMenuButton;
class USSTitlePressAnyButton;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSTitleManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTitlePressAnyButton* PressAnyKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> TitleMenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> TitleImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> TitleCanvasPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> TitleTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetSwitcher*> TitleSwitchers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* TitleInfoGuide;
    
public:
    USSTitleManager();

private:
    UFUNCTION(BlueprintCallable)
    void PressAnyOnKeyDown(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    void OnTopStartButton();
    
    UFUNCTION(BlueprintCallable)
    void OnTopQuitButton();
    
    UFUNCTION(BlueprintCallable)
    void OnTitleInfoGuide();
    
    UFUNCTION(BlueprintCallable)
    void OnStoreButton();
    
    UFUNCTION(BlueprintCallable)
    void OnStartButton();
    
    UFUNCTION(BlueprintCallable)
    void OnQuitButton();
    
    UFUNCTION(BlueprintCallable)
    void OnOptionButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDramaticBattleButton();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleButton();
    
    UFUNCTION(BlueprintCallable)
    void OnAdventureIFButton();
    
};

