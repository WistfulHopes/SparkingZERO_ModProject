#include "SSTravelSystemSceneTransPTHEVT.h"

ASSTravelSystemSceneTransPTHEVT::ASSTravelSystemSceneTransPTHEVT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequenceActor = NULL;
    this->LightingLevelStream = NULL;
    this->PaperTheaterOTLevelSequenceActor = NULL;
    this->CutImage = NULL;
}

void ASSTravelSystemSceneTransPTHEVT::OnMapDisplayed() {
}

void ASSTravelSystemSceneTransPTHEVT::OnLevelUnloadedCallback() {
}


