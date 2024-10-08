#include "SSMenuMapManager.h"

ASSMenuMapManager::ASSMenuMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubLevelManager = NULL;
}

void ASSMenuMapManager::StartSwitch() {
}

void ASSMenuMapManager::StartLoad() {
}

void ASSMenuMapManager::LoadMap(const FKoratMapDataList& InMapDataList, const FMenuMapParameter& InParameter) {
}

bool ASSMenuMapManager::IsMapSwitched() const {
    return false;
}

bool ASSMenuMapManager::IsMapLoading() const {
    return false;
}

bool ASSMenuMapManager::IsMapLoaded() const {
    return false;
}

bool ASSMenuMapManager::IsBusy() const {
    return false;
}


