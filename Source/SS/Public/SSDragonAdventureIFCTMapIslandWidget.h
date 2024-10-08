#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFCTMapWidget.h"
#include "SSDragonAdventureIFCTMapIslandWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTMapIslandWidget : public USSDragonAdventureIFCTMapWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ThumbnailWidgetName;
    
public:
    USSDragonAdventureIFCTMapIslandWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange();
    
};

