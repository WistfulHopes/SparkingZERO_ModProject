#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFCTMapWidget.h"
#include "SSDragonAdventureIFCTMapRowWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSDragonAdventureIFCTMapRowWidget : public USSDragonAdventureIFCTMapWidget {
    GENERATED_BODY()
public:
    USSDragonAdventureIFCTMapRowWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIslandChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIslandIndex() const;
    
};

