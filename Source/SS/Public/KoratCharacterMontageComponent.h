#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimTypes.h"
#include "EKoratBattleKey.h"
#include "EKoratBlastSlotType.h"
#include "EKoratBranch.h"
#include "EKoratSuperZCounterTakeType.h"
#include "KoratActionDataList.h"
#include "KoratAddtiveReactionParameter.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratCharacterMontageComponent.generated.h"

class ASSCharacter;
class UAnimMontage;
class UKoratCharacterMontageComponent;
class UKoratCharacterSubActionStateAnimInstance;
class ULevelSequence;
class USSAnimNotifyStateEvent;
class USSRandom;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterMontageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAnimNotifyStateEvent* ActionIdealPositionMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlastImpactDebugStartRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsActionStandbyEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> InputKeyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, float> HoldKeyTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSincePressedKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSincePressedKeyInAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSincePressedKeyInSection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSincePressedKeyAtInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, bool> PressedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, bool> ReleasedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, bool> PressedKeyAtInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> PressedKeyAtIntervalCoolTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSinceReleasedKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSinceReleasedKeyInAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, double> TimeSinceReleasedKeyInSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleKey, bool> IgnoreUntilPushedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratReplaceAnimationDataList> CurrentPlayingAnimDataListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageActionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionStateAnimInstance* SubActionStateAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IsActionCancelEnableCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratAddtiveReactionParameter AddtiveReactionParameter;
    
public:
    UKoratCharacterMontageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePlayingAnimDataListArrayNew();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FKoratReplaceAnimationDataList> UpdatePlayingAnimDataListArray();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateKeyInput(const float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UnRegistrationActionIdealPositionDataAsset(const USSAnimNotifyStateEvent* InStateEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetAddtiveReactionParameter(const FKoratAddtiveReactionParameter& InAddtiveReactionParameter);
    
    UFUNCTION(BlueprintCallable)
    void ResetAddtiveReactionParameter();
    
    UFUNCTION(BlueprintCallable)
    void RegistrationActionIdealPositionDataAsset(const USSAnimNotifyStateEvent* InStateEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayAddtiveReaction(const FKoratAddtiveReactionParameter& InAddtiveReactionParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionZCounter(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionWaitMontageEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionVanishingAttack(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionVanishingAssault(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionUltimateBlast(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionSuperZCounterSmash(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionSuperZCounterShakeOff(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionSuperZCounterPosture(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionSuperZCounterCatch(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionStepIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionStepAvoidance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionShortDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRushStep(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRushHighSpeedMoveRevenge(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRushHighSpeedMove(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRushDerivative(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRush(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRollingPress2(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRollingPress1(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRollingHurricane2(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRollingHurricane1(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRollingHammer(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionRevengeCounter(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionPlayAction(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionParrySmash(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionParry(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionNoContinuation(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionMidAirKick(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionLocomotion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionLiftStrike(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionKidan(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionJudgment(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionHeavyFinish(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionHeavyCrush3(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionHeavyCrush2(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionHeavyCrush1(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionGuardClear(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionGuard(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionGrandSlash(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionFastAvoidance(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionDragonSmash(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionDragonHoming();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionDragonDashAttack(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionDragonDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionDemo(const FKoratActionDataList InActionDataList, const ULevelSequence* InLevelSequence, const bool bInIsSoonTurn, const bool bInPlayImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionDashAttack(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionCharge(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionCannonSmash(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionCannonAttack3(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionCannonAttack2(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionCannonAttack1(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionCannon(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionBlown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionBlast(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionBaseReaction(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionAscertain(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionAction(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessZCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessSuperZCounter(const EKoratSuperZCounterTakeType InSuperZCounterTakeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessSuperCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessFastAvoidance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessAscertain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugBlastImpactStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleZCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleSuperZCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleSuperCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleSonicSway();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleFastAvoidance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPossibleAscertain();
    
    UFUNCTION(BlueprintCallable)
    void IsDebugBlastImpactStartRequest(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugBlastImpactBeforeFiringEvent(ASSCharacter* InCharacter, EKoratBlastSlotType InBlastSlotType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleKeyReleasedImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleKeyPressedImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsActionCanStandby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FKoratReplaceAnimationDataList> GetPlayingAnimDataListArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNotifyEventTime(const FAnimNotifyEvent& InAnimNotifyEvent) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMontageNotifyEvents(const UAnimMontage* InAnimMontage, TArray<FAnimNotifyEvent>& OutNotifyEvents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMontageActionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratReplaceAnimationDataList> GetCurrentPlayingAnimDataListArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleasedInSectionImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleasedInActionImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleasedImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedInSectionImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedInActionImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedAtIntervalImpl(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetBattleKeyInterval(EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyHoldTimeImpl(const EKoratBattleKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratAddtiveReactionParameter GetAddtiveReactionParameter() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugRequestBlastImpactStart();
    
    UFUNCTION(BlueprintCallable)
    void DebugBlastImpactStart();
    
    UFUNCTION(BlueprintCallable)
    void DebugBlastImpactFiring(ASSCharacter* InCharacter, int32 InPlayerSide, float& OutDelayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CopyPropertyAtDamageCostumeChange(const UKoratCharacterMontageComponent* InSrcMontageComp);
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleKeyTimeSincePressedKeyAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleKeyTimeSinceOneKey(const EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleKeyTimeSinceKeyInAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckingEventForLocomotionIdle(UPARAM(Ref) FString& ChekingEvent, const TArray<FKoratActionDataList>& IdleActionList);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddIgnoreUntilPushedKey(TArray<EKoratBattleKey> InIgnoreUntilPushedKey);
    
};

