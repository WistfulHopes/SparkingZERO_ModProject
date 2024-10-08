#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleCommandManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleCommandManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSBattleTrainingBattleCommandManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMiss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeHide();
    
};

