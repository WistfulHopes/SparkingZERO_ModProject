#include "SSEventSceneScriptDE.h"

ASSEventSceneScriptDE::ASSEventSceneScriptDE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSequence = NULL;
    this->Picture = NULL;
    this->LayerSequence = NULL;
    this->SEFadeSequence = NULL;
}

void ASSEventSceneScriptDE::WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void ASSEventSceneScriptDE::ProceedSubscene() {
}

void ASSEventSceneScriptDE::PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}


