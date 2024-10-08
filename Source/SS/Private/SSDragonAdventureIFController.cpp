#include "SSDragonAdventureIFController.h"

ASSDragonAdventureIFController::ASSDragonAdventureIFController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentScene = NULL;
    this->PrevScene = NULL;
    this->CutCamera = NULL;
    this->DirectingActor = NULL;
}


