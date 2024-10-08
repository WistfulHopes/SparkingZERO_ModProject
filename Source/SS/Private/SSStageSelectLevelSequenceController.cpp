#include "SSStageSelectLevelSequenceController.h"

ASSStageSelectLevelSequenceController::ASSStageSelectLevelSequenceController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageChangeLevelSequenceActor = NULL;
    this->StageSelectSubLevelManager = NULL;
    this->MapImage = NULL;
    this->PlayerCharacter = NULL;
    this->Chameleon = NULL;
}

void ASSStageSelectLevelSequenceController::UnloadMap() {
}

void ASSStageSelectLevelSequenceController::SwitchLoadedMap() {
}

void ASSStageSelectLevelSequenceController::LoadMap() {
}

UTexture2D* ASSStageSelectLevelSequenceController::GetChangeStageImage() {
    return NULL;
}

AActor* ASSStageSelectLevelSequenceController::GetChameleon() {
    return NULL;
}


