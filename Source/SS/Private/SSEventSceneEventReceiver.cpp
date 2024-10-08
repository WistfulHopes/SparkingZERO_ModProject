#include "SSEventSceneEventReceiver.h"

ASSEventSceneEventReceiver::ASSEventSceneEventReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraPriority = EEventSceneCameraPriority::None;
    this->bCameraSwitchable = true;
}

void ASSEventSceneEventReceiver::SetCameraSwitchable(bool bInCameraSwitchable) {
}

void ASSEventSceneEventReceiver::SetCameraPriority(const EEventSceneCameraPriority& InPriority) {
}


