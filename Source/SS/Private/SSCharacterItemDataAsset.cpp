#include "SSCharacterItemDataAsset.h"

USSCharacterItemDataAsset::USSCharacterItemDataAsset() {
    this->UnLockType = EKoratUnLockType::Default;
    this->Type = ESSCharacterItemType::None;
    this->SortId = 0;
    this->Category = ESSCharacterItemCategory::None;
    this->bCreateModeOnly = false;
    this->bDeveloperOnly = false;
    this->EquipCharacterCondition = ESSCharacterItemEquipCharacterCondition::None;
    this->bForceTakeOverAtTransform = false;
    this->bCheckEquipCharacterConditionAtTransform = false;
    this->bAtPassingTime = false;
    this->PassingTime = 0.00f;
}

bool USSCharacterItemDataAsset::GetTagTexts(TArray<FText>& OutTagTexts, const TArray<ESSCharacterItemTagTextType>& InTags) const {
    return false;
}

FText USSCharacterItemDataAsset::GetTagText(ESSCharacterItemTagTextType InTagType) const {
    return FText::GetEmpty();
}

FText USSCharacterItemDataAsset::GetItemNameText() const {
    return FText::GetEmpty();
}

FText USSCharacterItemDataAsset::GetInfoText() const {
    return FText::GetEmpty();
}

void USSCharacterItemDataAsset::CreateEffectAssets() {
}


