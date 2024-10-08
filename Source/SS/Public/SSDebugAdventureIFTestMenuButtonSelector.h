#pragma once
#include "CoreMinimal.h"
#include "OnSSDebugAdventureIFTestSelectorValueChangedEventDelegate.h"
#include "SSMenuButtonSelector.h"
#include "SSDebugAdventureIFTestMenuButtonSelector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDebugAdventureIFTestMenuButtonSelector : public USSMenuButtonSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSDebugAdventureIFTestSelectorValueChangedEvent OnChangedEvent;
    
    USSDebugAdventureIFTestMenuButtonSelector();

protected:
    UFUNCTION(BlueprintCallable)
    void OnChanged();
    
};

