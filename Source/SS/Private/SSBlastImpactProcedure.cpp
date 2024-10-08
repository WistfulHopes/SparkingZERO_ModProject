#include "SSBlastImpactProcedure.h"

ASSBlastImpactProcedure::ASSBlastImpactProcedure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OtherSideDistance = 4000.00f;
    this->BlastEffector = TEXT("SPINE3_EFFECTOR_00");
    this->OpenWidthScale = 0.90f;
    this->BlastImpactDataAsset = NULL;
    this->bDrawDebug = false;
    this->DrawDebugLifetime = 0.10f;
    this->DrawDebugThickness = 5.00f;
}

void ASSBlastImpactProcedure::UpdateLocation() {
}

void ASSBlastImpactProcedure::UpdateEffectTransform() {
}

void ASSBlastImpactProcedure::StopBlastImpactEffect() {
}

void ASSBlastImpactProcedure::SetupImpl() {
}

void ASSBlastImpactProcedure::SetSentNotificationDamage(bool bSent) {
}

void ASSBlastImpactProcedure::SetPlayEndDemo(bool InPlayEndDemo) {
}


void ASSBlastImpactProcedure::RequestLoserBlastStop() {
}

void ASSBlastImpactProcedure::RequestDamage() {
}


bool ASSBlastImpactProcedure::IsSentNotificationDamage() const {
    return false;
}

bool ASSBlastImpactProcedure::IsPlayEndDemo() const {
    return false;
}


bool ASSBlastImpactProcedure::IsBlastReset() const {
    return false;
}

void ASSBlastImpactProcedure::GetBlastImpactCamera(FSSBlastImpactGameRecord& OutRecord) {
}

int32 ASSBlastImpactProcedure::GetBattleImpactDebugBlastImpactNum2P(EKoratBlastSlotType& OutBlastSlot, FKoratActionDataList& OutAction) {
    return 0;
}

int32 ASSBlastImpactProcedure::GetBattleImpactDebugBlastImpactNum1P(EKoratBlastSlotType& OutBlastSlot, FKoratActionDataList& OutAction) {
    return 0;
}

int32 ASSBlastImpactProcedure::GetBattleImpactDebugAttackSide() {
    return 0;
}

FKoratActionDataList ASSBlastImpactProcedure::GetActionDataFromBlastDataWithPlayerID(const ESSBlastImpactActionDataType InType, USSBattleImpactCharacterProxy* InCharacterProxy, int32 InPlayerIndex) {
    return FKoratActionDataList{};
}

FKoratActionDataList ASSBlastImpactProcedure::GetActionDataFromBlastData(const ESSBlastImpactActionDataType InType, USSBattleImpactCharacterProxy* InCharacterProxy) {
    return FKoratActionDataList{};
}

void ASSBlastImpactProcedure::EndWinnerBlast() {
}

void ASSBlastImpactProcedure::EndLoserBlast() {
}

bool ASSBlastImpactProcedure::CheckHaveEndEvent_Implementation(USSBattleImpactCharacterProxy* InCharacterProxy) {
    return false;
}


