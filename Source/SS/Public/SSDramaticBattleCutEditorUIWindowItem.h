#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSDramaticBattleCutEditorUIWindowItem.generated.h"

class ASSDramaticBattleCutEditorUIWindowController;
class USSDramaticBattleCutEditorUIWindow;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorUIWindowItem : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorUIWindowController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindow* UIWindow;
    
public:
    USSDramaticBattleCutEditorUIWindowItem();

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

