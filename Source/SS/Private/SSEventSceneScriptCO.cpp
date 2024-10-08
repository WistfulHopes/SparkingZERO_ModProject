#include "SSEventSceneScriptCO.h"

ASSEventSceneScriptCO::ASSEventSceneScriptCO(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSequence = NULL;
}

void ASSEventSceneScriptCO::WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void ASSEventSceneScriptCO::WaitDialogueFeed(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void ASSEventSceneScriptCO::SetLeadingCharacters(const TArray<int32>& InCharacterIds) {
}

void ASSEventSceneScriptCO::SetFpsCameraRotateLimits(const float InUp, const float InDown, const float InLeft, const float InRight) {
}

void ASSEventSceneScriptCO::SetFpsCameraFov(const float InFov) {
}

void ASSEventSceneScriptCO::ProceedSubscene() {
}

void ASSEventSceneScriptCO::PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<int32>& InCharacterIds) {
}

void ASSEventSceneScriptCO::OpenChoices(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, ESSEventSceneChoicesResult& OutResult) {
}

void ASSEventSceneScriptCO::JumpSubscene(const int32 InNextSubscene) {
}


