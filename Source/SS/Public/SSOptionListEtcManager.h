#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSOptionListEtcManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListEtcManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionListEtcManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueRightsNotation();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValuePrivacyPolicy();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueEULA();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAnalysis();
    
public:
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& InButtonName);
    
};

