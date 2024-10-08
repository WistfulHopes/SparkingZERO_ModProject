#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleCommandBtnManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleCommandBtnManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSBattleTrainingBattleCommandBtnManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeFocus_toOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeFocus_On();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeFocus();
    
};

