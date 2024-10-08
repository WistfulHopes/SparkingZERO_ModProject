#include "SSPowerImpactProcedure.h"

ASSPowerImpactProcedure::ASSPowerImpactProcedure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FowardSocketName = TEXT("socket_act_Hand2hand_F");
    this->NullBoneName = TEXT("ROTATED_NULL");
    this->LeftHandBaseName = TEXT("UTILITY_48");
    this->LeftHandWristName = TEXT("WRIST_L");
    this->LeftHandOffsetName = TEXT("socket_IK_H2H_Target_L");
    this->RightHandBaseName = TEXT("UTILITY_49");
    this->RightHandWristName = TEXT("WRIST_R");
    this->RightHandOffsetName = TEXT("socket_IK_Palm_R");
    this->PowerImpactDataAsset = NULL;
    this->PowerImpactRound = 0;
    this->PowerImpactLoopLevelSequence = NULL;
    this->bDebugDraw = false;
    this->DrawDebugLifetime = 0.00f;
    this->DrawDebugThickness = 0.00f;
    this->bForceDisableIK = false;
}

void ASSPowerImpactProcedure::UpdateLocation() {
}

void ASSPowerImpactProcedure::UpdateHandIK() {
}

void ASSPowerImpactProcedure::UpdateEffectTransform() {
}

void ASSPowerImpactProcedure::SetupImpl() {
}

void ASSPowerImpactProcedure::RequestCharacterMove(float TravelTime) {
}


void ASSPowerImpactProcedure::IsPowerImpactSequencePlayMode(EKoratBranch& OutResult) {
}

int32 ASSPowerImpactProcedure::GetPowerImpactRoundCount(bool& OutEndedGame) {
    return 0;
}

void ASSPowerImpactProcedure::GetLevelSequenceByType(const EBattleImpactType InBlastType, const ESSPowerImpactLevelSequenceType InType, TSoftObjectPtr<ULevelSequence>& OutLevelSequence) {
}

void ASSPowerImpactProcedure::GetLevelSequence(const ESSPowerImpactLevelSequenceType InType, TSoftObjectPtr<ULevelSequence>& OutLevelSequence) {
}

void ASSPowerImpactProcedure::EnableHandIK() {
}

void ASSPowerImpactProcedure::DisableHandIK() {
}

void ASSPowerImpactProcedure::DebugDrawRequestCharacterMove() {
}

FTransform ASSPowerImpactProcedure::CalcImpactTransform() {
    return FTransform{};
}


