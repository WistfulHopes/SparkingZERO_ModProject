#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPauseRequirementListManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPauseRequirementListManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSPauseRequirementListManager();

    UFUNCTION(BlueprintCallable)
    void SubScroll();
    
    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeANI_Out_R();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeANI_Out_L();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeANI_IN_R();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeANI_IN_L();
    
    UFUNCTION(BlueprintCallable)
    void ChkList();
    
    UFUNCTION(BlueprintCallable)
    void AddScroll();
    
};

