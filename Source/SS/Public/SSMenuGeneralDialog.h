#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMenuGeneralDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuGeneralDialog : public USSMenuManager {
    GENERATED_BODY()
public:
    USSMenuGeneralDialog();

    UFUNCTION(BlueprintCallable)
    void ThisStart();
    
    UFUNCTION(BlueprintCallable)
    void ForceDecideButton();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecideButton();
    
};

