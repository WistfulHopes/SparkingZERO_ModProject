#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMenuHoldButtonSet.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuHoldButtonSet : public USSMenuManager {
    GENERATED_BODY()
public:
    USSMenuHoldButtonSet();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeHoldButtonProgress(USSMenuButton* InButton, float InProgress);
    
};

