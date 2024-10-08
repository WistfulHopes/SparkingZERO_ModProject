#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionAssistControlManager.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSOptionAssistControlManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionAssistControlManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistRevengeCounter(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistPursuit(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistPassive(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistGuard(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistDragonDashAttack(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistDragonDash(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistControl(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueAssistCombo(const FSSMenuButtonTextItemEntry& InChangeItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnButtonHoldProgressDisp(USSMenuButton* InButton, float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void ButtonValueReset(const FString& InButtonName);
    
};

