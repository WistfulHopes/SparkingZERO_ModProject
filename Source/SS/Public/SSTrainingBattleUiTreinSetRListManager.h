#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonTextItemEntry.h"
#include "SSMenuManager.h"
#include "SSTrainingBattleUiTreinSetRListManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTrainingBattleUiTreinSetRListManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSTrainingBattleUiTreinSetRListManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeValue09(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue08(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue07(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue06(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue05(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue04(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue03(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue02(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue01(const FSSMenuButtonTextItemEntry& InChangeItem);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeValue00(const FSSMenuButtonTextItemEntry& InChangeItem);
    
};

