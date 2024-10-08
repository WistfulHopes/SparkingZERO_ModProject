#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticEditCutListUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditCutListUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSDramaticEditCutListUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSetupPanelDataTest(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSetupPanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel(USSMenuButton* InHitButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusLostAnimEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusGetAnimEvent();
    
};

