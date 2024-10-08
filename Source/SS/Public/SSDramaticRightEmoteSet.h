#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticRightEmoteSet.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticRightEmoteSet : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticRightEmoteSet();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFocusEmotePanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideEmotePanel(USSMenuButton* InButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeChangeSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeChangeNormal();
    
};

