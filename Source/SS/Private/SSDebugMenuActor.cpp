#include "SSDebugMenuActor.h"

ASSDebugMenuActor::ASSDebugMenuActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUIHide = false;
    this->bOperatePlayerStartEnable = false;
    this->PlayerStartTarget = NULL;
    this->bCopyLevelPlayerStartTransform = false;
    this->bOperateTraceLocatorEnable = false;
    this->TraceLocatorTarget = NULL;
    this->bCopyLevelTraceLocatorTransform = false;
    this->CapsuleComponent = NULL;
    this->MenuSceneController = NULL;
}

void ASSDebugMenuActor::SetPlayerStartMovable(APlayerStart* InPlayerStart) {
}

void ASSDebugMenuActor::SetCapsuleComponentMovable() {
}


