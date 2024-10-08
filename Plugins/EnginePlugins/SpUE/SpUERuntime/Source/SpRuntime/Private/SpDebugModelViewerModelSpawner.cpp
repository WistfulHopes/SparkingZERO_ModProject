#include "SpDebugModelViewerModelSpawner.h"

USpDebugModelViewerModelSpawner::USpDebugModelViewerModelSpawner() {
}

bool USpDebugModelViewerModelSpawner::IsManageModel(AActor* InActor) {
    return false;
}

FSpDebugModelViewerModelHandle USpDebugModelViewerModelSpawner::GetModelHandle(AActor* InActor) {
    return FSpDebugModelViewerModelHandle{};
}

USpDebugModelViewerModelCtrlComponent* USpDebugModelViewerModelSpawner::GetModelCtrlComponent(FSpDebugModelViewerModelHandle InHandle) {
    return NULL;
}

AActor* USpDebugModelViewerModelSpawner::GetModel(FSpDebugModelViewerModelHandle InHandle) {
    return NULL;
}


