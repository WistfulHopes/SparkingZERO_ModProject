#include "KoratFreeTimelineAssetGetter.h"

UKoratFreeTimelineAssetGetter::UKoratFreeTimelineAssetGetter() {
    this->LoadedDefaultAsset = NULL;
}

void UKoratFreeTimelineAssetGetter::SetInteractAttributeData(const FKoratInteractAttributeData& InInteractAttribute) {
}

bool UKoratFreeTimelineAssetGetter::SetAssetSoftObjectPath(const FSoftObjectPath InSoftObjectAssetPath) {
    return false;
}

FKoratInteractAttributeData UKoratFreeTimelineAssetGetter::GetInteractAttributeData() const {
    return FKoratInteractAttributeData{};
}


