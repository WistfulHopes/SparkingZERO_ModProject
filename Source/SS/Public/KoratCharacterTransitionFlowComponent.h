#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EBattlePracticeAcceptedInputsType.h"
#include "EKoratActionBodyPitchMode.h"
#include "EKoratActionBodyYawMode.h"
#include "EKoratActionRotationBaseDirection.h"
#include "EKoratBattleAssistFinishType.h"
#include "EKoratBattleDirectingAction.h"
#include "EKoratBattleKey.h"
#include "EKoratBlastSlotType.h"
#include "EKoratBranch.h"
#include "EKoratCharacterLocomotionDetailStatus.h"
#include "EKoratInequalitySignType.h"
#include "EKoratPursuitType.h"
#include "ESSFlowConditionsDragonDashAttack.h"
#include "ESSFlowConditionsGroundType.h"
#include "ESSFlowConditionsInputDirectionType.h"
#include "ESSFlowConditionsJudgmentType.h"
#include "KoratActionDataList.h"
#include "KoratReplaceTransitionActionData.h"
#include "KoratReplaceTransitionActionDataList.h"
#include "KoratTransitionData.h"
#include "KoratCharacterTransitionFlowComponent.generated.h"

class ASSCharacter;
class UKoratAsyncTransitionAscertain;
class UKoratAsyncTransitionBaseReaction;
class UKoratAsyncTransitionBlast;
class UKoratAsyncTransitionBlown;
class UKoratAsyncTransitionCannon;
class UKoratAsyncTransitionCannonAttack1;
class UKoratAsyncTransitionCannonAttack2;
class UKoratAsyncTransitionCannonAttack3;
class UKoratAsyncTransitionCannonSmash;
class UKoratAsyncTransitionCharge;
class UKoratAsyncTransitionDashAttack;
class UKoratAsyncTransitionDemo;
class UKoratAsyncTransitionDragonDash;
class UKoratAsyncTransitionDragonDashAttack;
class UKoratAsyncTransitionDragonHoming;
class UKoratAsyncTransitionDragonSmash;
class UKoratAsyncTransitionFastAvoidance;
class UKoratAsyncTransitionGrandSlash;
class UKoratAsyncTransitionGuard;
class UKoratAsyncTransitionGuardClear;
class UKoratAsyncTransitionHeavyCrush1;
class UKoratAsyncTransitionHeavyCrush2;
class UKoratAsyncTransitionHeavyCrush3;
class UKoratAsyncTransitionHeavyFinish;
class UKoratAsyncTransitionJudgment;
class UKoratAsyncTransitionKidan;
class UKoratAsyncTransitionLiftStrike;
class UKoratAsyncTransitionMidAirKick;
class UKoratAsyncTransitionNoContinuation;
class UKoratAsyncTransitionParry;
class UKoratAsyncTransitionParrySmash;
class UKoratAsyncTransitionPlayAction;
class UKoratAsyncTransitionRevengeCounter;
class UKoratAsyncTransitionRollingHammer;
class UKoratAsyncTransitionRollingHurricane1;
class UKoratAsyncTransitionRollingHurricane2;
class UKoratAsyncTransitionRollingPress1;
class UKoratAsyncTransitionRollingPress2;
class UKoratAsyncTransitionRush;
class UKoratAsyncTransitionRushHighSpeedMove;
class UKoratAsyncTransitionRushHighSpeedMoveRevenge;
class UKoratAsyncTransitionRushStep;
class UKoratAsyncTransitionShortDash;
class UKoratAsyncTransitionStepAvoidance;
class UKoratAsyncTransitionStepIn;
class UKoratAsyncTransitionSuperZCounterCatch;
class UKoratAsyncTransitionSuperZCounterPosture;
class UKoratAsyncTransitionSuperZCounterShakeOff;
class UKoratAsyncTransitionSuperZCounterSmash;
class UKoratAsyncTransitionTurn;
class UKoratAsyncTransitionUltimateBlast;
class UKoratAsyncTransitionVanishingAssault;
class UKoratAsyncTransitionVanishingAttack;
class UKoratAsyncTransitionWaitMontageEnd;
class UKoratAsyncTransitionZCounter;
class UKoratCharacterMovementComponent;
class UKoratReplaceTransitionActionDataAsset;
class USSRandom;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterTransitionFlowComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratReplaceTransitionActionDataAsset* CommonReplaceTransitionActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratReplaceTransitionActionDataAsset* IndividualReplaceTransitionActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bViaBrakeRevengeSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* SSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreliminaryTurningCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList PreliminaryTurnedActionCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreliminaryTurnedAnimIndexCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreliminaryTurnedIsAnimTurnCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList NowAction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ReactionDesiredCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratTransitionData> AsyncTransitionJudgmentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDemo* AsyncTransitionDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionPlayAction* AsyncTransitionPlayAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionTurn* AsyncTransitionTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionWaitMontageEnd* AsyncTransitionWaitMontageEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionNoContinuation* AsyncTransitionNoContinuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRush* AsyncTransitionRush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRushHighSpeedMove* AsyncTransitionRushHighSpeedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRushHighSpeedMoveRevenge* AsyncTransitionRushHighSpeedMoveRevenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRushStep* AsyncTransitionRushStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionFastAvoidance* AsyncTransitionFastAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyFinish* AsyncTransitionHeavyFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyCrush1* AsyncTransitionHeavyCrush1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyCrush2* AsyncTransitionHeavyCrush2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyCrush3* AsyncTransitionHeavyCrush3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionMidAirKick* AsyncTransitionMidAirKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannon* AsyncTransitionCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonSmash* AsyncTransitionCannonSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonAttack1* AsyncTransitionCannonAttack1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonAttack2* AsyncTransitionCannonAttack2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonAttack3* AsyncTransitionCannonAttack3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingHammer* AsyncTransitionRollingHammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingHurricane1* AsyncTransitionRollingHurricane1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingHurricane2* AsyncTransitionRollingHurricane2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingPress1* AsyncTransitionRollingPress1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingPress2* AsyncTransitionRollingPress2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionLiftStrike* AsyncTransitionLiftStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionGrandSlash* AsyncTransitionGrandSlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionKidan* AsyncTransitionKidan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCharge* AsyncTransitionCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionGuard* AsyncTransitionGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionGuardClear* AsyncTransitionGuardClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionBlast* AsyncTransitionBlast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionBaseReaction* AsyncTransitionBaseReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRevengeCounter* AsyncTransitionRevengeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionAscertain* AsyncTransitionAscertain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionParry* AsyncTransitionParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionParrySmash* AsyncTransitionParrySmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionZCounter* AsyncTransitionZCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterPosture* AsyncTransitionSuperZCounterPosture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterCatch* AsyncTransitionSuperZCounterCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterShakeOff* AsyncTransitionSuperZCounterShakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterSmash* AsyncTransitionSuperZCounterSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionUltimateBlast* AsyncTransitionUltimateBlast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonDashAttack* AsyncTransitionDragonDashAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDashAttack* AsyncTransitionDashAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonSmash* AsyncTransitionDragonSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionVanishingAssault* AsyncTransitionVanishingAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionVanishingAttack* AsyncTransitionVanishingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonDash* AsyncTransitionDragonDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonHoming* AsyncTransitionDragonHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionShortDash* AsyncTransitionShortDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionStepIn* AsyncTransitionStepIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionStepAvoidance* AsyncTransitionStepAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionBlown* AsyncTransitionBlown;
    
    UKoratCharacterTransitionFlowComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TransitCompleteCommon(const FKoratActionDataList& InAction);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCheckBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTurningAndTransitionDestination(FKoratActionDataList InTurningAction, FKoratActionDataList InAction, bool InIsAnimTurn, bool InIsTurnNoMove, bool InIsForceTurnAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTransitionDestinationOfOpponent(FKoratActionDataList InAction, bool InIsStartTurn, bool InIsAnimTurn, bool InLinkOpponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTransitionDestinationAnimIndex(FKoratActionDataList InAction, int32 InAnimIndex, bool InIsStartTurn, bool InIsAnimTurn, FName InTurningSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTransitionDestination(FKoratActionDataList InAction, bool InIsStartTurn, bool InIsAnimTurn, FName InTurningSection, bool IsNoTurnBeforeTransition);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestDirectingAction(const EKoratBattleDirectingAction InRequestType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsViaBrakeRevengeSmash(const bool InIsViaBrakeRevengeSmash);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicTimeDilation(const float InTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceptedInputsType(const TArray<EBattlePracticeAcceptedInputsType> InTypes, bool InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunTransition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetTargetRotationCpp(UKoratCharacterMovementComponent* InCharacterMovement, EKoratActionRotationBaseDirection InRotationBaseDirection, EKoratActionBodyYawMode InBodyYawMode, EKoratActionBodyPitchMode InBodyPitchMode, const FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitActionCpp(const FKoratActionDataList& InAction);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotificationDashPursuitRequestOnBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void MoveSafeNearArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViaBrakeRevengeSmash() const;
    
    UFUNCTION(BlueprintCallable)
    void IsReversalUkemiAssistOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable)
    void IsReversalRevengeCounterAssistOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsRequestTransitionAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsRequestJumpSectionAction() const;
    
    UFUNCTION(BlueprintCallable)
    void IsPossibleSpeedImpact(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashStopRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashStartRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashPursuitRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsDragonDashPursuitEndRequestOnBattleAssist(ESSFlowConditionsDragonDashAttack& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistSonicSwaySmashRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistRollingHurricaneRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistDerivativeRequestOnBattleAssist(int32 InRushCount, EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, bool bCheckOnly);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistDeltaHeavyCrashRequestOnBattleAssist(EKoratBattleAssistFinishType& OutResult, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistDeltaHeavyCrashButtonCheckOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistBurstFinishRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable)
    void IsComboAssistAtemiSmashRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleKeyReleased(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleKeyPressed(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable)
    void IsBattleAssistRushCancel(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitVanishingRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitRequestOnBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitRequestClearOnBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitNotificationOnBattleAssist(const EKoratPursuitType InPursuitType);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitNotificationDragonHomingOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitDragonHomingRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoPursuitDragonHomingBlowDirectionOnBattleAssist(const FKoratActionDataList& InActonUP, const FKoratActionDataList& InActonDown, FKoratActionDataList& OutActon, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoGuardRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoGuardPushRequestOnBattleAssist(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void IsAutoGuardHoldRequestBattleAssist(EKoratBranch& OutResult);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetSSCharacterCpp();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleDirectingAction GetRequestDirectingAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetReplaceTransitionActionDataList(const FKoratReplaceTransitionActionDataList InTransitionAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratReplaceTransitionActionData GetReplaceTransitionActionData(const FKoratReplaceTransitionActionDataList InTransitionAction) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGiantDamageTurnCut(EKoratActionBodyYawMode& InOutBodyYawMode, EKoratActionBodyPitchMode& InOutBodyPitchMode, const FKoratActionDataList& InAction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetCurrentActionCpp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleased(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressed(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetActiveEmoteSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsUsableCurrentLockonState(const EKoratBlastSlotType InSlot, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsTargetVanishingAppearWait(ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsSuccessSuperCounter(ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsShakeOffDirection(ESSFlowConditionsInputDirectionType& OutDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsNearMode(ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsLocomotionDetailStatus(ESSFlowConditionsJudgmentType& OutJudgment, const TArray<EKoratCharacterLocomotionDetailStatus>& InCompareDetailList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsHaveBeenMet(ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsGroundType(ESSFlowConditionsGroundType& OutGroundType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlowConditionsActionElapsedTime(float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void EndCheckBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void EndBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAsyncTransition(const FKoratActionDataList InActionDataList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugLog(const FString& InLogString);
    
public:
    UFUNCTION(BlueprintCallable)
    UKoratAsyncTransitionJudgment* CreateAsyncTransition(const FKoratActionDataList InActionDataList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator ComputeTargetRotationTowardOpponentCpp(EKoratActionRotationBaseDirection InRotationBaseDirection, const FKoratActionDataList InAction);
    
public:
    UFUNCTION(BlueprintCallable)
    void ComboAssistStartOnBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void ComboAssistResetOnBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void ClearCheckBlastBoostOnCharacter();
    
};

