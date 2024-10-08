#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleState.h"
#include "SSAiUtilityComponent.h"
#include "SSAiPersonalityComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiPersonalityComponent : public USSAiUtilityComponent {
    GENERATED_BODY()
public:
    USSAiPersonalityComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSp();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSkillStock();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateHp();
    
    UFUNCTION(BlueprintCallable)
    void OnStartImpact();
    
    UFUNCTION(BlueprintCallable)
    void OnSpUp(const float InSpUp);
    
    UFUNCTION(BlueprintCallable)
    void OnSpDown(const float InSpDown);
    
    UFUNCTION(BlueprintCallable)
    void OnSparking();
    
    UFUNCTION(BlueprintCallable)
    void OnRecover(const float InRecover);
    
    UFUNCTION(BlueprintCallable)
    void OnPureBattleStartNoClear();
    
    UFUNCTION(BlueprintCallable)
    void OnKnockDown();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(const float InDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterBattleStateChanged(const ECharacterBattleState InOldState, const ECharacterBattleState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTargetAction(const FName InNewAction);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMyselfAction(const FName InNewAction);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateTargetCharacter(ASSCharacter* InTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVigilance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSenseOfSuperiority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelflessness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntentToMurder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetImpatience();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCautiousness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAggression();
    
};

