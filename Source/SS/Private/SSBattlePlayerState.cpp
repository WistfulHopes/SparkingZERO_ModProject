#include "SSBattlePlayerState.h"

ASSBattlePlayerState::ASSBattlePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASSBattlePlayerState::SetForSwitchController_Implementation(const ASSBattlePlayerState* InPlayerState) {
}

void ASSBattlePlayerState::SetControllerWaitForSpeedImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerWaitForPowerImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerWaitForMapChange_Implementation(ASSCharacter* InCharacter, const EKoratMapChangeType& InMapChangeType, const EKoratMapChangeStartTiming& InStartTiming, const FKoratMapDataList& InMapDataList, const TSoftObjectPtr<ULevelSequence>& InLevelSequence, const TSoftObjectPtr<ULevelSequence>& InOTLevelSequence) {
}

void ASSBattlePlayerState::SetControllerWaitForEventRequest_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerWaitForCrashImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerWaitForCharacterTaketurns_Implementation(ASSCharacter* InCharacter, const FKoratCharacterDataList& InChangeCharacter, const FKoratCharacterCostumeDataList& InChangeCostume, const TArray<FKoratCharacterItemDataList>& InEquipItems, int32 InCostumeDamageLv, int32 InCostumeScratchLv) {
}

void ASSBattlePlayerState::SetControllerWaitForCharacterDamageCostume_Implementation(ASSCharacter* InCharacter, const FKoratCharacterDataList& InChangeCharacter, const FKoratCharacterCostumeDataList& InChangeCostume, const TArray<FKoratCharacterItemDataList>& InEquipItems, int32 InCostumeDamageLv, int32 InCostumeScratchLv) {
}

void ASSBattlePlayerState::SetControllerWaitForCharacterChange_Implementation(ASSCharacter* InCharacter, const FKoratCharacterDataList& InChangeCharacter, const FKoratCharacterCostumeDataList& InChangeCostume, const TArray<FKoratCharacterItemDataList>& InEquipItems, const FKoratCharacterDataChangeCharacterActionDataList& InChangeCharacterActionList, const TArray<FKoratCharacterDataList>& InForbitChangeCharacters, int32 InCostumeDamageLv, int32 InCostumeScratchLv) {
}

void ASSBattlePlayerState::SetControllerWaitForBodyChange_Implementation(ASSCharacter* InCharacter, FKoratActionDataList InAction) {
}

void ASSBattlePlayerState::SetControllerWaitForBlastImpactReflecter_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerWaitForBlastImpactAttacker_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerSupporterUnloadRequest_Implementation(ASSCharacter* InCharacter, const TArray<FSSSupportingCharacterData>& SupportCharacters) {
}

void ASSBattlePlayerState::SetControllerSupporterLoadRequest_Implementation(ASSCharacter* InCharacter, const TArray<FSSSupportingCharacterData>& SupportCharacters) {
}

void ASSBattlePlayerState::SetControllerStop_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerSpeedImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerSettle_Implementation() {
}

void ASSBattlePlayerState::SetControllerResult_Implementation() {
}

void ASSBattlePlayerState::SetControllerReadyForFadeInBattleSetup_Implementation() {
}

void ASSBattlePlayerState::SetControllerReadyForFadeIn_Implementation() {
}

void ASSBattlePlayerState::SetControllerReadyForBattle_Implementation() {
}

void ASSBattlePlayerState::SetControllerReadyForAbortByNetworkError_Implementation() {
}

void ASSBattlePlayerState::SetControllerReadyForAbortByMatched_Implementation() {
}

void ASSBattlePlayerState::SetControllerReadyForAbortByInterruptCommon_Implementation() {
}

void ASSBattlePlayerState::SetControllerPowerImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerPossessedCharacter_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerMapChange_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerInitialized_Implementation() {
}

void ASSBattlePlayerState::SetControllerDone_Implementation() {
}

void ASSBattlePlayerState::SetControllerCrashImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerCharacterTaketurns_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerCharacterDamageCostume_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerCharacterChange_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerBodyChange_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerBlastImpact_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::SetControllerBattle_Implementation(ASSCharacter* InCharacter) {
}

void ASSBattlePlayerState::OutGameRestart_Implementation() {
}


