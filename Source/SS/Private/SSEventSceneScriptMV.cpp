#include "SSEventSceneScriptMV.h"

ASSEventSceneScriptMV::ASSEventSceneScriptMV(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSequence = NULL;
    this->SubsceneSequence = NULL;
    this->IFSuggestWidget = NULL;
}

void ASSEventSceneScriptMV::WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void ASSEventSceneScriptMV::SetLeadingCharacters(const TArray<int32>& InCharacterIds) {
}

void ASSEventSceneScriptMV::PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<int32>& InCharacterIds) {
}


