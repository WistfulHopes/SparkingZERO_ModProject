#pragma once
#include "CoreMinimal.h"
#include "SSStandardMenuManager.h"
#include "SSMainMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuManager : public USSStandardMenuManager {
    GENERATED_BODY()
public:
    USSMainMenuManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnOptionButton();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuClickButton();
    
};

