#include "SSEventSceneScriptTS.h"

ASSEventSceneScriptTS::ASSEventSceneScriptTS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSequence = NULL;
    this->ActionSequence = NULL;
}

void ASSEventSceneScriptTS::WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void ASSEventSceneScriptTS::ProceedSubscene() {
}

void ASSEventSceneScriptTS::PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<int32>& InCharacterIds) {
}


