#include "WindSimFieldManager.h"
#include "WindSimFieldManagerComponent.h"

AWindSimFieldManager::AWindSimFieldManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManagerComponent = CreateDefaultSubobject<UWindSimFieldManagerComponent>(TEXT("WindSimFieldManagerComponent0"));
}

void AWindSimFieldManager::ShowWindVelocityViewer(bool bInShow) {
}

void AWindSimFieldManager::EnableInputWindVelocityDebugDrawLine(bool bEnable) {
}


