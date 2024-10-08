#include "SSDragonAdventureIFCharacterSelectController.h"

ASSDragonAdventureIFCharacterSelectController::ASSDragonAdventureIFCharacterSelectController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterManager = NULL;
    this->SelectMenu = NULL;
    this->MenuGeneralDialog = NULL;
    this->GuideWidget = NULL;
    this->CutCamera = NULL;
    this->CameraActor = NULL;
    this->DirectingSeqActor = NULL;
    this->OffSetPosActor = NULL;
}


