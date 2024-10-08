#pragma once
#include "CoreMinimal.h"
#include "OnChangeActionDelegate.h"
#include "OnTargetUsesChargeActionDelegate.h"
#include "OnTargetUsesSkillActionDelegate.h"
#include "SSAiUtilityComponent.h"
#include "SSAiPerceptionComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAiPerceptionComponent : public USSAiUtilityComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeAction OnChangeMyselfAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeAction OnChangeTargetAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetUsesChargeAction OnTargetUsesChargeAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetUsesSkillAction OnTargetUsesSkillAction;
    
    USSAiPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVanishingAttack(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRushHighSpeedMoveCounterProcessed(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRushHighSpeedMoveCounter(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetReactionRateRushHighSpeedMoveCounter(const float InReactionRate);
    
    UFUNCTION(BlueprintCallable)
    void SetLightningAttack(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDragonHoming(const bool InEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnModelStart();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeAi();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(const float InDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedCharacter(ASSCharacter* InCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZBurstDash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVanishingAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUltimateBlastRangeIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetsPreventionOfAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetSparkingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuperCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuperAscertain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeedImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSparkingCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmashKidanIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShortRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchOff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRushKidanIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRushHighSpeedMoveCounterProcessed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRushHighSpeedMoveCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevengeCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMyselfSparkingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMediumRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLongRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLineTraceFailureToTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLineTraceDestructibleToTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLightningAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastAvoidanceCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastAvoidanceBlastCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastAvoidanceBlastBullet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyIsBehind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragonHoming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrashImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterBlastImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeTargetSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeTargetAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeMyselfSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeMyselfAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurstDerived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreakingTheGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlownAwayReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastSkill2RangeIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastSkill1RangeIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastRepel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastForte2RangeIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastForte1RangeIsOutOfRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBehindTheEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAscertain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionRateRushHighSpeedMoveCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLowerPriorityCheckGroup() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSuperAscertain();
    
};

