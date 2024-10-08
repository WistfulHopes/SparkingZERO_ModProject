#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionListBrightnessManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListBrightnessManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionListBrightnessManager();

private:
    UFUNCTION(BlueprintCallable)
    void SetHUDButton();
    
    UFUNCTION(BlueprintCallable)
    void SetBrightnessOptionHUD();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueHDR(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueContrastButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueBrightnessButton(const float InChangeGauge);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueBlackButton(const float InChangeGauge);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChkDateTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& InButtonName);
    
};

