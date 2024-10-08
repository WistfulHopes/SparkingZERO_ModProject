#include "KoratSpaceAreaManager.h"

UKoratSpaceAreaManager::UKoratSpaceAreaManager() {
}

FKoratSpaceAreaTypeDataList UKoratSpaceAreaManager::GetSpaceAreaType(const FVector& WorldPoint) {
    return FKoratSpaceAreaTypeDataList{};
}

AKoratSpaceArea* UKoratSpaceAreaManager::GetSpaceAreaActor(const FVector& WorldPoint) {
    return NULL;
}

UKoratSpaceAreaManager* UKoratSpaceAreaManager::GetInstance() {
    return NULL;
}


