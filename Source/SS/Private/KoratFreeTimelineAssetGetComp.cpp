#include "KoratFreeTimelineAssetGetComp.h"

UKoratFreeTimelineAssetGetComp::UKoratFreeTimelineAssetGetComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadedDefaultAsset = NULL;
}

bool UKoratFreeTimelineAssetGetComp::SetAssetSoftObjectPath(const FSoftObjectPath InSoftObjectAssetPath) {
    return false;
}


