#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSTitleTermsManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTitleTermsManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSTitleTermsManager();

    UFUNCTION(BlueprintCallable)
    void SubScroll();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueRightButton();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLeftButton();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLanguage();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueCategory_R();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueCategory_L();
    
    UFUNCTION(BlueprintCallable)
    void AddScroll();
    
};

