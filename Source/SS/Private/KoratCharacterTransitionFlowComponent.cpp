#include "KoratCharacterTransitionFlowComponent.h"
#include "SSRandom.h"

UKoratCharacterTransitionFlowComponent::UKoratCharacterTransitionFlowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_UKoratCharacterTransitionFlowComponent"));
    this->CommonReplaceTransitionActionData = NULL;
    this->IndividualReplaceTransitionActionData = NULL;
    this->bViaBrakeRevengeSmash = false;
    this->SSCharacter = NULL;
    this->bPreliminaryTurningCpp = false;
    this->PreliminaryTurnedAnimIndexCpp = 0;
    this->bPreliminaryTurnedIsAnimTurnCpp = false;
    this->AsyncTransitionDemo = NULL;
    this->AsyncTransitionPlayAction = NULL;
    this->AsyncTransitionTurn = NULL;
    this->AsyncTransitionWaitMontageEnd = NULL;
    this->AsyncTransitionNoContinuation = NULL;
    this->AsyncTransitionRush = NULL;
    this->AsyncTransitionRushHighSpeedMove = NULL;
    this->AsyncTransitionRushHighSpeedMoveRevenge = NULL;
    this->AsyncTransitionRushStep = NULL;
    this->AsyncTransitionFastAvoidance = NULL;
    this->AsyncTransitionHeavyFinish = NULL;
    this->AsyncTransitionHeavyCrush1 = NULL;
    this->AsyncTransitionHeavyCrush2 = NULL;
    this->AsyncTransitionHeavyCrush3 = NULL;
    this->AsyncTransitionMidAirKick = NULL;
    this->AsyncTransitionCannon = NULL;
    this->AsyncTransitionCannonSmash = NULL;
    this->AsyncTransitionCannonAttack1 = NULL;
    this->AsyncTransitionCannonAttack2 = NULL;
    this->AsyncTransitionCannonAttack3 = NULL;
    this->AsyncTransitionRollingHammer = NULL;
    this->AsyncTransitionRollingHurricane1 = NULL;
    this->AsyncTransitionRollingHurricane2 = NULL;
    this->AsyncTransitionRollingPress1 = NULL;
    this->AsyncTransitionRollingPress2 = NULL;
    this->AsyncTransitionLiftStrike = NULL;
    this->AsyncTransitionGrandSlash = NULL;
    this->AsyncTransitionKidan = NULL;
    this->AsyncTransitionCharge = NULL;
    this->AsyncTransitionGuard = NULL;
    this->AsyncTransitionGuardClear = NULL;
    this->AsyncTransitionBlast = NULL;
    this->AsyncTransitionBaseReaction = NULL;
    this->AsyncTransitionRevengeCounter = NULL;
    this->AsyncTransitionAscertain = NULL;
    this->AsyncTransitionParry = NULL;
    this->AsyncTransitionParrySmash = NULL;
    this->AsyncTransitionZCounter = NULL;
    this->AsyncTransitionSuperZCounterPosture = NULL;
    this->AsyncTransitionSuperZCounterCatch = NULL;
    this->AsyncTransitionSuperZCounterShakeOff = NULL;
    this->AsyncTransitionSuperZCounterSmash = NULL;
    this->AsyncTransitionUltimateBlast = NULL;
    this->AsyncTransitionDragonDashAttack = NULL;
    this->AsyncTransitionDashAttack = NULL;
    this->AsyncTransitionDragonSmash = NULL;
    this->AsyncTransitionVanishingAssault = NULL;
    this->AsyncTransitionVanishingAttack = NULL;
    this->AsyncTransitionDragonDash = NULL;
    this->AsyncTransitionDragonHoming = NULL;
    this->AsyncTransitionShortDash = NULL;
    this->AsyncTransitionStepIn = NULL;
    this->AsyncTransitionStepAvoidance = NULL;
    this->AsyncTransitionBlown = NULL;
}

void UKoratCharacterTransitionFlowComponent::TransitCompleteCommon(const FKoratActionDataList& InAction) {
}

void UKoratCharacterTransitionFlowComponent::StartCheckBlastBoostOnCharacter() {
}





void UKoratCharacterTransitionFlowComponent::SetRequestDirectingAction(const EKoratBattleDirectingAction InRequestType) {
}

void UKoratCharacterTransitionFlowComponent::SetIsViaBrakeRevengeSmash(const bool InIsViaBrakeRevengeSmash) {
}

void UKoratCharacterTransitionFlowComponent::SetCinematicTimeDilation(const float InTimeDilation) {
}

void UKoratCharacterTransitionFlowComponent::SetAcceptedInputsType(const TArray<EBattlePracticeAcceptedInputsType> InTypes, bool InTarget) {
}


void UKoratCharacterTransitionFlowComponent::ResetTargetRotationCpp(UKoratCharacterMovementComponent* InCharacterMovement, EKoratActionRotationBaseDirection InRotationBaseDirection, EKoratActionBodyYawMode InBodyYawMode, EKoratActionBodyPitchMode InBodyPitchMode, const FKoratActionDataList InAction) {
}

void UKoratCharacterTransitionFlowComponent::OnTransitActionCpp(const FKoratActionDataList& InAction) {
}

void UKoratCharacterTransitionFlowComponent::NotificationDashPursuitRequestOnBattleAssist() {
}

void UKoratCharacterTransitionFlowComponent::MoveSafeNearArea() {
}

bool UKoratCharacterTransitionFlowComponent::IsViaBrakeRevengeSmash() const {
    return false;
}

void UKoratCharacterTransitionFlowComponent::IsReversalUkemiAssistOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey) {
}

void UKoratCharacterTransitionFlowComponent::IsReversalRevengeCounterAssistOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign) {
}



void UKoratCharacterTransitionFlowComponent::IsPossibleSpeedImpact(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsDragonDashStopRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsDragonDashStartRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsDragonDashPursuitRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsDragonDashPursuitEndRequestOnBattleAssist(ESSFlowConditionsDragonDashAttack& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistSonicSwaySmashRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistRollingHurricaneRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistDerivativeRequestOnBattleAssist(int32 InRushCount, EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, bool bCheckOnly) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistDeltaHeavyCrashRequestOnBattleAssist(EKoratBattleAssistFinishType& OutResult, float InTime, EKoratInequalitySignType InInequalitySign) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistDeltaHeavyCrashButtonCheckOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistBurstFinishRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign) {
}

void UKoratCharacterTransitionFlowComponent::IsComboAssistAtemiSmashRequestOnBattleAssist(EKoratBranch& OutResult, EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign) {
}

bool UKoratCharacterTransitionFlowComponent::IsBattleKeyReleased(const EKoratBattleKey InBattleKey) const {
    return false;
}

bool UKoratCharacterTransitionFlowComponent::IsBattleKeyPressed(const EKoratBattleKey InBattleKey) const {
    return false;
}

void UKoratCharacterTransitionFlowComponent::IsBattleAssistRushCancel(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitVanishingRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitRequestOnBattleAssist() {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitRequestClearOnBattleAssist() {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitNotificationOnBattleAssist(const EKoratPursuitType InPursuitType) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitNotificationDragonHomingOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitDragonHomingRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoPursuitDragonHomingBlowDirectionOnBattleAssist(const FKoratActionDataList& InActonUP, const FKoratActionDataList& InActonDown, FKoratActionDataList& OutActon, EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoGuardRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoGuardPushRequestOnBattleAssist(EKoratBranch& OutResult) {
}

void UKoratCharacterTransitionFlowComponent::IsAutoGuardHoldRequestBattleAssist(EKoratBranch& OutResult) {
}

ASSCharacter* UKoratCharacterTransitionFlowComponent::GetSSCharacterCpp() {
    return NULL;
}

EKoratBattleDirectingAction UKoratCharacterTransitionFlowComponent::GetRequestDirectingAction() const {
    return EKoratBattleDirectingAction::None;
}

FKoratActionDataList UKoratCharacterTransitionFlowComponent::GetReplaceTransitionActionDataList(const FKoratReplaceTransitionActionDataList InTransitionAction) const {
    return FKoratActionDataList{};
}

FKoratReplaceTransitionActionData UKoratCharacterTransitionFlowComponent::GetReplaceTransitionActionData(const FKoratReplaceTransitionActionDataList InTransitionAction) const {
    return FKoratReplaceTransitionActionData{};
}

void UKoratCharacterTransitionFlowComponent::GetGiantDamageTurnCut(EKoratActionBodyYawMode& InOutBodyYawMode, EKoratActionBodyPitchMode& InOutBodyPitchMode, const FKoratActionDataList& InAction) {
}

FKoratActionDataList UKoratCharacterTransitionFlowComponent::GetCurrentActionCpp() const {
    return FKoratActionDataList{};
}

float UKoratCharacterTransitionFlowComponent::GetBattleKeyTimeSinceReleased(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float UKoratCharacterTransitionFlowComponent::GetBattleKeyTimeSincePressed(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}











void UKoratCharacterTransitionFlowComponent::EndCheckBlastBoostOnCharacter() {
}

void UKoratCharacterTransitionFlowComponent::EndBlastBoostOnCharacter() {
}

void UKoratCharacterTransitionFlowComponent::DestroyAsyncTransition(const FKoratActionDataList InActionDataList) {
}

void UKoratCharacterTransitionFlowComponent::DebugLog(const FString& InLogString) {
}

UKoratAsyncTransitionJudgment* UKoratCharacterTransitionFlowComponent::CreateAsyncTransition(const FKoratActionDataList InActionDataList) {
    return NULL;
}

FRotator UKoratCharacterTransitionFlowComponent::ComputeTargetRotationTowardOpponentCpp(EKoratActionRotationBaseDirection InRotationBaseDirection, const FKoratActionDataList InAction) {
    return FRotator{};
}

void UKoratCharacterTransitionFlowComponent::ComboAssistStartOnBattleAssist() {
}

void UKoratCharacterTransitionFlowComponent::ComboAssistResetOnBattleAssist() {
}

void UKoratCharacterTransitionFlowComponent::ClearCheckBlastBoostOnCharacter() {
}


