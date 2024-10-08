#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSBattleTrainingBattleMenuListAManager.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingBattleMenuListAManager : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSBattleTrainingBattleMenuListAManager();

    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOutR();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOutL();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInR();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInL();
    
};

