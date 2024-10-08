#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMenuTextWithChoiceUi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuTextWithChoiceUi : public USSMenuManager {
    GENERATED_BODY()
public:
    USSMenuTextWithChoiceUi();

protected:
    UFUNCTION(BlueprintCallable)
    void DecideButton();
    
};

