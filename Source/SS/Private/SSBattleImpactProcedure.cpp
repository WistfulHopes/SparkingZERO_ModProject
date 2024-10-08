#include "SSBattleImpactProcedure.h"
#include "SSRandom.h"

ASSBattleImpactProcedure::ASSBattleImpactProcedure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_ASSBattleImpactProcedure"));
    this->bFirstFrameSkip = false;
    this->MainCharacterProxy = NULL;
    this->SubCharacterProxy = NULL;
    this->PhaseLevelSequence = NULL;
    this->PhaseLoopLevelSequence = NULL;
    this->DeltaTimeOneTick = 0.02f;
    this->bPlaying = false;
    this->bRequestBattleImpactBreak = false;
    this->bBattleImpactBreak = false;
}

void ASSBattleImpactProcedure::UpdateMatchTransform_Implementation(float Alpha) {
}

void ASSBattleImpactProcedure::UnbindOnTimer() {
}

void ASSBattleImpactProcedure::UnbindOnTick() {
}

void ASSBattleImpactProcedure::TriggerEventMatchTransformByType(const UObject* WorldContextObject, float Time, EBattleImpactTriggerEventOpt opt, EBattleImpactType Type, bool isRunOnly) {
}

void ASSBattleImpactProcedure::TriggerEventMatchTransform(const UObject* WorldContextObject, float Time, EBattleImpactTriggerEventOpt opt) {
}

void ASSBattleImpactProcedure::StopLoopLevelSequence() {
}

void ASSBattleImpactProcedure::StopLevelSequence() {
}

void ASSBattleImpactProcedure::SetTimer(const float InTime) {
}

EBattleImpactPhase ASSBattleImpactProcedure::SetNextPhaseTime(const float InTime) {
    return EBattleImpactPhase::kEnd;
}

void ASSBattleImpactProcedure::SetNextPhase(EBattleImpactPhase InNextPhase, float InTime) {
}

void ASSBattleImpactProcedure::SetLevelSequenceTransform(const FTransform& NewTransform) {
}

void ASSBattleImpactProcedure::SetImpactTransform(EKoratImpactTransformType InType, const FTransform& InTransform) {
}

void ASSBattleImpactProcedure::RequestBattleImpactBreakStatic(const UObject* WorldContextObject) {
}


void ASSBattleImpactProcedure::OnTriggerEventMatchTransform(float Time, EBattleImpactTriggerEventOpt Option, bool InWarpReturn) {
}

void ASSBattleImpactProcedure::OnInterimBattle_Implementation(USSBattleImpactCharacterProxy* InLeadCharacter, float InDominance) {
}

void ASSBattleImpactProcedure::OnChangedPhase_Implementation(const EBattleImpactPhase InPhase) {
}

void ASSBattleImpactProcedure::OnBattleImpactBreak_Implementation() {
}

void ASSBattleImpactProcedure::NotificationBattleImpactEventStatic(const UObject* WorldContextObject, const FString& InEventName, bool bEnable) {
}

void ASSBattleImpactProcedure::LoopLevelSequence(UObject* WorldContextObject, const TSoftObjectPtr<ULevelSequence> InLevelSequence, ASSLevelSequenceActor*& OutSequenceActor, bool InEnableRebindPlayer) {
}

bool ASSBattleImpactProcedure::IsNewWarpCtrl() {
    return false;
}

bool ASSBattleImpactProcedure::IsLevelSequencePlaying() const {
    return false;
}

USSBattleImpactCharacterProxy* ASSBattleImpactProcedure::GetWinner() const {
    return NULL;
}

EBattleImpactPhase ASSBattleImpactProcedure::GetPreviousPhase() const {
    return EBattleImpactPhase::kEnd;
}

EBattleImpactPhase ASSBattleImpactProcedure::GetNextPhase_Implementation(EBattleImpactPhase InCurrentPhase) const {
    return EBattleImpactPhase::kEnd;
}

USSBattleImpactCharacterProxy* ASSBattleImpactProcedure::GetLoser() const {
    return NULL;
}

EBattleImpactType ASSBattleImpactProcedure::GetImpactType_Implementation() const {
    return EBattleImpactType::kNone;
}

EBattleImpactPhase ASSBattleImpactProcedure::GetCurrentPhase() const {
    return EBattleImpactPhase::kEnd;
}


FVector ASSBattleImpactProcedure::GetAimLocation_Implementation() const {
    return FVector{};
}

void ASSBattleImpactProcedure::DebugDrawText_Implementation(UCanvas* InCanvas, APlayerController* InPlayerController) {
}

void ASSBattleImpactProcedure::DebugDraw_Implementation(float InDeltaT) const {
}

float ASSBattleImpactProcedure::CreateLevelSequence(const TSoftObjectPtr<ULevelSequence> InLevelSequence, const FBattleImpactLevelSequenceParams InParameter) {
    return 0.0f;
}

bool ASSBattleImpactProcedure::CanInterimResult_Implementation() const {
    return false;
}

float ASSBattleImpactProcedure::CalculatMinusOneTick(float InTime) {
    return 0.0f;
}

void ASSBattleImpactProcedure::BattleImpactBreakOnGameStateBase(UObject* WorldContextObject) {
}


