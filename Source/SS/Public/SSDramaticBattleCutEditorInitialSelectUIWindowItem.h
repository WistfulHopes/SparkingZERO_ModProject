#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowItem.generated.h"

class ASSDramaticBattleCutEditorInitialSelectUIController;
class USSDramaticBattleCutEditorInitialSelectUIWindow;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorInitialSelectUIWindowItem : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorInitialSelectUIController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindow* UIWindow;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowItem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNewFocusedCallback(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnNewDecidedCallback(USSMenuButton* InButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeepSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsKeepSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHighlight();
    
};

