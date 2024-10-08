#pragma once
#include "CoreMinimal.h"
#include "EAiDirectionOfAttack.h"
#include "SSAiUtilityComponent.h"
#include "SSAiLearningComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiLearningComponent : public USSAiUtilityComponent {
    GENERATED_BODY()
public:
    USSAiLearningComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetUsesSkillAction(ASSCharacter* InTarget, const bool InSectionChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetUsesChargeAction(ASSCharacter* InTarget, const bool InFirst);
    
    UFUNCTION(BlueprintCallable)
    void OnInputCommand();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishCommand();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(const float InDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackHit(const float InDamage, const bool InGuardBreak);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObstructionFailureCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDirectionOfAttackCount(const EAiDirectionOfAttack InDirType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAttackFailureCount(const FName InCommandId);
    
};

