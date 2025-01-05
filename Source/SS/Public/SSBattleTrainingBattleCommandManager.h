#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleCommandManager.generated.h"

class USSBattleTrainingBattleCommandBtnManager;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleCommandManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSBattleTrainingBattleCommandBtnManager*> BattleCommandBtnManager;
    
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

