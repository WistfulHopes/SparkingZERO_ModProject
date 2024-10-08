#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFCTMapWidget.h"
#include "SSDragonAdventureIFCTMapIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTMapIconWidget : public USSDragonAdventureIFCTMapWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventBlockName;
    
public:
    USSDragonAdventureIFCTMapIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelect();
    
};

