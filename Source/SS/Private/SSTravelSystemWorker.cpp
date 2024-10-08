#include "SSTravelSystemWorker.h"

ASSTravelSystemWorker::ASSTravelSystemWorker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneTransitionWorker = NULL;
}

void ASSTravelSystemWorker::OnLevelUnloadedCallback() {
}


