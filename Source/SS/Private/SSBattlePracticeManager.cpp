#include "SSBattlePracticeManager.h"

ASSBattlePracticeManager::ASSBattlePracticeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASSBattlePracticeManager::StopTutorial() {
}

void ASSBattlePracticeManager::StopPlayerOpration() {
}

void ASSBattlePracticeManager::StartTutorial() {
}

void ASSBattlePracticeManager::StartReset(const FName InMenuName, const bool InPositionOnly) {
}

void ASSBattlePracticeManager::StartPlayerOpration(const FName InMenuName) {
}

void ASSBattlePracticeManager::StartModelAI(const FName InMenuName) {
}

bool ASSBattlePracticeManager::SetupTutorialMenu(const FName InMenuName, const FKoratBattlePracticsMenuDataList& InMenuDataList) {
    return false;
}

void ASSBattlePracticeManager::SetupTutorial(const FName InMenuName) {
}

bool ASSBattlePracticeManager::SetupPracticeMenu(const FName InMenuName, const FKoratBattlePracticsMenuDataList& InMenuDataList) {
    return false;
}

void ASSBattlePracticeManager::SetupPlayerOpration(const FName InMenuName) {
}

void ASSBattlePracticeManager::SetupModelAI(const FName InMenuName) {
}

void ASSBattlePracticeManager::ResetSuccessCommandIndex(const FName InMenuName) {
}

void ASSBattlePracticeManager::OnTrainingPositionReset() {
}

void ASSBattlePracticeManager::OnPureBattleStartNoClear() {
}


void ASSBattlePracticeManager::OnCreateController(AController* InCreateController) {
}

void ASSBattlePracticeManager::OnCharacterChange(const int32 InPlaySide) {
}

void ASSBattlePracticeManager::OnChangeToNewCharacterPost(ASSCharacter* InBefore, ASSCharacter* InAfter, const bool bInNewCharacter) {
}

void ASSBattlePracticeManager::OnBattleSetup() {
}

void ASSBattlePracticeManager::OnBattleFinishNoClear() {
}

void ASSBattlePracticeManager::OnAttackHit2P(const float InDamage, const bool InGuardBreak) {
}

void ASSBattlePracticeManager::OnAttackHit1P(const float InDamage, const bool InGuardBreak) {
}

bool ASSBattlePracticeManager::IsResetTiming() {
    return false;
}

bool ASSBattlePracticeManager::IsModelAI() {
    return false;
}

bool ASSBattlePracticeManager::IsBlackOutReset(const FName InMenuName) {
    return false;
}


