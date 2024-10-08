#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSOptionListKeyControlManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSOptionListKeyControlManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSOptionListKeyControlManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValueUserNotification(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueTutorialMode(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValuePlayerType(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueLeftHanded(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValueDataDelete();
    
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
    void ButtonValueReset(const FString& InButtonName);
    
};

