#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSDragonAdventureIFCSOutlineWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCSOutlineWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
    USSDragonAdventureIFCSOutlineWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClose();
    
};

