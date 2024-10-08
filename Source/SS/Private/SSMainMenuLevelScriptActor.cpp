#include "SSMainMenuLevelScriptActor.h"

ASSMainMenuLevelScriptActor::ASSMainMenuLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeInWaitTime = 0.00f;
    this->ShopCustomizeTransitionTime = 0.00f;
    this->CameraAttachRootActor = NULL;
    this->DebugFrameCounter = 0;
}

void ASSMainMenuLevelScriptActor::TestStopDirectingSequence() {
}

void ASSMainMenuLevelScriptActor::TestPlayDirectingSequence(EMainMenuSceneArea InArea, int32 InSubSceneIndex) {
}

void ASSMainMenuLevelScriptActor::TestLevelTransition(EMainMenuSceneArea InArea, int32 InSubSceneIndex) {
}

void ASSMainMenuLevelScriptActor::TestExitLoopDirectingSequence() {
}

void ASSMainMenuLevelScriptActor::StartQuickMatch() {
}

void ASSMainMenuLevelScriptActor::StartOfflineBattle() {
}

void ASSMainMenuLevelScriptActor::ShowArea(const FString& InAreaId) {
}

void ASSMainMenuLevelScriptActor::DebugPlayNPCWaitAction() {
}

void ASSMainMenuLevelScriptActor::ChangeFocusSubScene(EMainMenuSceneArea InArea, int32 InSubSceneIndex) {
}

void ASSMainMenuLevelScriptActor::ChangeArea(EMainMenuSceneArea InNextArea) {
}


