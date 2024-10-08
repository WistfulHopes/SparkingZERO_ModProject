#include "SpDebugModelViewerSpawnCtrlComponent.h"

USpDebugModelViewerSpawnCtrlComponent::USpDebugModelViewerSpawnCtrlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SearchResourcePath = TEXT("/Game");
    this->bIsRecursiveSearchResourcePath = true;
    this->bIsEntryToResidentDebugMenuDefault = false;
}

void USpDebugModelViewerSpawnCtrlComponent::DeleteModel(FSpDebugModelViewerModelHandle InHandle) {
}

void USpDebugModelViewerSpawnCtrlComponent::DeleteAllModels() {
}

FSpDebugModelViewerModelHandle USpDebugModelViewerSpawnCtrlComponent::CreateModel(const FString& InResourcePath, const FTransform& InTransform) {
    return FSpDebugModelViewerModelHandle{};
}


