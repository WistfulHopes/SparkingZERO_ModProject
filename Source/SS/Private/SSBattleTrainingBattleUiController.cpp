#include "SSBattleTrainingBattleUiController.h"

ASSBattleTrainingBattleUiController::ASSBattleTrainingBattleUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectMenu.AddDefaulted(7);
    this->GuideWidget = NULL;
    this->TextArea = NULL;
    this->BattleMain = NULL;
    this->MenuBase = NULL;
    this->MenuBaseA = NULL;
    this->MenuListA = NULL;
    this->MenuListB = NULL;
    this->HelpDialog = NULL;
    this->SettingData = NULL;
    this->CommandData = NULL;
}

void ASSBattleTrainingBattleUiController::TrainingResetFinished(FName InMenuName) {
}

void ASSBattleTrainingBattleUiController::TrainingModelFinished(FName InMenuName) {
}

void ASSBattleTrainingBattleUiController::TrainingInputSuccess(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName) {
}

void ASSBattleTrainingBattleUiController::TrainingInputFinished(FName InMenuName) {
}

void ASSBattleTrainingBattleUiController::TrainingInputFailure(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName) {
}

void ASSBattleTrainingBattleUiController::PracticeResetDeathRetry() {
}


