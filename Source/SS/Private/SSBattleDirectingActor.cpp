#include "SSBattleDirectingActor.h"

ASSBattleDirectingActor::ASSBattleDirectingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASSBattleDirectingActor::SetCounterDebugDisplayState(bool InIsVisible) {
}

void ASSBattleDirectingActor::OnTick(const float InDeltaTime, const bool InPause) {
}

void ASSBattleDirectingActor::OnPureBattleStartNoClear() {
}

void ASSBattleDirectingActor::OnCreateController(AController* InCreateController) {
}

void ASSBattleDirectingActor::OnCharacterChange(const int32 InPlaySide) {
}

void ASSBattleDirectingActor::OnBattleSettle() {
}

void ASSBattleDirectingActor::NotifyTaketurnFinished(float InRequiredMinimum) {
}

void ASSBattleDirectingActor::NotifyBattleDirectingActivateEnd(EKoratBattleDirectingActivate InActivateType, int32 InOptionValue) {
}

bool ASSBattleDirectingActor::IsKnockDownDirectingWait() const {
    return false;
}

bool ASSBattleDirectingActor::IsKnockDownDirectingRun() const {
    return false;
}

bool ASSBattleDirectingActor::IsKnockDownDirectingNone() const {
    return false;
}

bool ASSBattleDirectingActor::IsCounterDebugDisplayState() {
    return false;
}

bool ASSBattleDirectingActor::IsConcludedDirectingRunning() const {
    return false;
}

bool ASSBattleDirectingActor::IsBattleConcluded() const {
    return false;
}

FSSBattleDirectingParam ASSBattleDirectingActor::GetDirectingParam() const {
    return FSSBattleDirectingParam{};
}

EKoratKnockDownBattleDirectingState ASSBattleDirectingActor::GetBattleConcludedDirectingState() const {
    return EKoratKnockDownBattleDirectingState::None;
}

void ASSBattleDirectingActor::AttachOneShotDeadlyAttachWarp(ASSCharacter* InTargetCharacter, FVector& InPositionResult, FRotator& InRotateResult) {
}

void ASSBattleDirectingActor::AbortByBattleConcluded() {
}


