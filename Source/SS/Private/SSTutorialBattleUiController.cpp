#include "SSTutorialBattleUiController.h"

ASSTutorialBattleUiController::ASSTutorialBattleUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialBattleAllManager = NULL;
    this->GuideWidget = NULL;
    this->ButtonGuideWidget = NULL;
}

void ASSTutorialBattleUiController::TrainingInputSuccess(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName) {
}

void ASSTutorialBattleUiController::TrainingInputFinished(FName InMenuName) {
}

void ASSTutorialBattleUiController::TrainingInputFailure(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName) {
}

void ASSTutorialBattleUiController::FullPowerSmashDamageBrake() {
}


