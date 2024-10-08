#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPauseManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSPauseManager : public USSMenuManager {
    GENERATED_BODY()
public:
    USSPauseManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTutorialSkip();
    
    UFUNCTION(BlueprintCallable)
    void OnTrainingSettingButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnStandbyButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnStageSelectButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnCharaSelectButton();
    
    UFUNCTION(BlueprintCallable)
    void OnRetryButton();
    
    UFUNCTION(BlueprintCallable)
    void OnResumeButton();
    
    UFUNCTION(BlueprintCallable)
    void OnQuitButton();
    
    UFUNCTION(BlueprintCallable)
    void OnObserveEndButton();
    
    UFUNCTION(BlueprintCallable)
    void OnGiveupButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishTrainingButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDramaticDetailsButton();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMatchingConditionButton();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleDetailsButton();
    
    UFUNCTION(BlueprintCallable)
    void OnActionListButton();
    
};

