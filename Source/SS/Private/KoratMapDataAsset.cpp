#include "KoratMapDataAsset.h"

UKoratMapDataAsset::UKoratMapDataAsset() {
}

void UKoratMapDataAsset::Sort() {
}

FText UKoratMapDataAsset::GetMapName(const FName& InMapKey) const {
    return FText::GetEmpty();
}

bool UKoratMapDataAsset::Get(const FKoratMapDataList& InKey, FKoratMapDataAssetRecord& OutValue) const {
    return false;
}

void UKoratMapDataAsset::ErrorCheck() {
}


