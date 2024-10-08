#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingBattleCategolyTextManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleCategolyTextManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSBattleTrainingBattleCategolyTextManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTitleView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutTitleView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseMenu();
    
};

