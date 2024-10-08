#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingItemLevelType.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleMenuBaseAManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleMenuBaseAManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSBattleTrainingBattleMenuBaseAManager();

    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
    UFUNCTION(BlueprintCallable)
    ESSBattleTrainingItemLevelType GetNextItemLevelType();
    
    UFUNCTION(BlueprintCallable)
    ESSBattleTrainingItemLevelType GetItemLevelType();
    
};

