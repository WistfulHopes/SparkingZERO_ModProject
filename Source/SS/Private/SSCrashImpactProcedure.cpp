#include "SSCrashImpactProcedure.h"

ASSCrashImpactProcedure::ASSCrashImpactProcedure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->In1SocketName = TEXT("Socket_Act_Crash_IN1");
    this->In2SocketName = TEXT("Socket_Act_Crash_IN2");
    this->NullBoneName = TEXT("ROTATED_NULL");
    this->bDebugDraw = false;
    this->DrawDebugLifetime = 0.00f;
    this->DrawDebugThickness = 0.00f;
    this->GameCount = 0;
    this->CrashImpactCameraLevelSequence = NULL;
    this->bUse2PCamera = false;
    this->LeadCharacter = NULL;
}

void ASSCrashImpactProcedure::UpdateEffectTransform() {
}

void ASSCrashImpactProcedure::StopCrashImpactCameraLevelSequence() {
}

void ASSCrashImpactProcedure::SetupImpl() {
}

void ASSCrashImpactProcedure::SetCrashImpactCameraSide(USSBattleImpactCharacterProxy* InCharacter, int32 InControllerId, const ECameraGlobalSlot InSlot, float InLerpTimeCam, float InLerpTimeLat) {
}

void ASSCrashImpactProcedure::ResetSetCrashImpactCameraSide() {
}

void ASSCrashImpactProcedure::RequestIntroductionPositionSetImpl(const FName MatchSocket, float TravelTime) {
}

void ASSCrashImpactProcedure::RequestGamePositionSetImpl(float TravelTime) {
}



void ASSCrashImpactProcedure::PlayGameActionImpl() {
}

void ASSCrashImpactProcedure::PlayFinishActionImpl() {
}



void ASSCrashImpactProcedure::PlayCrashImpactCameraLevelSequenceByCharacter(USSBattleImpactCharacterProxy* InCharacter, const ECrashImpactAttackDirection InDirection, const ECrashImpactCameraDistance InDistance, const FBattleImpactLevelSequenceParams InParameter) {
}

void ASSCrashImpactProcedure::PlayCrashImpactCameraLevelSequence(const ECrashImpactAttackDirection InDirection, const ECrashImpactCameraDistance InDistance, const FBattleImpactLevelSequenceParams InParameter) {
}



ECrashImpactAttackDirection ASSCrashImpactProcedure::PickAction_Implementation() const {
    return ECrashImpactAttackDirection::kFront;
}

void ASSCrashImpactProcedure::IsGameFinished(EKoratBranch& OutResult) {
}

void ASSCrashImpactProcedure::IsGameCamera2PSide(EKoratBranch& OutResult) {
}

ECrashImpactCameraDistance ASSCrashImpactProcedure::GetRandomCameraDistance() {
    return ECrashImpactCameraDistance::kNear;
}


USSBattleImpactCharacterProxy* ASSCrashImpactProcedure::GetOffenceCharacter() const {
    return NULL;
}

float ASSCrashImpactProcedure::GetFinishYaw_Implementation() const {
    return 0.0f;
}


USSBattleImpactCharacterProxy* ASSCrashImpactProcedure::GetDefenseCharacter() const {
    return NULL;
}

ECrashImpactAttackDirection ASSCrashImpactProcedure::GetCurrentPickupAttackDirection() const {
    return ECrashImpactAttackDirection::kFront;
}

void ASSCrashImpactProcedure::GetCrashImpactCameraLevelSequence(TSoftObjectPtr<ULevelSequence>& OutLevelSequence, const ECrashImpactAttackDirection InDirection, const ECrashImpactCameraDistance InDistance) {
}

FVector ASSCrashImpactProcedure::CalcImpactLocation(const FName HeightSocket) {
    return FVector{};
}

float ASSCrashImpactProcedure::CalcGameBaseHeight_Implementation() {
    return 0.0f;
}

FTransform ASSCrashImpactProcedure::CalcFinishPositionImpl(const float FinishYaw) const {
    return FTransform{};
}

FRotator ASSCrashImpactProcedure::CalcConfrontRotator(const FRotator& InRotate) {
    return FRotator{};
}


