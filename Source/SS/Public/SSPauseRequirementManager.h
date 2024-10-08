#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPauseRequirementManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPauseRequirementManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSPauseRequirementManager();

    UFUNCTION(BlueprintCallable)
    void SubScroll();
    
    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
    UFUNCTION(BlueprintCallable)
    void AddScroll();
    
};

