#include "KoratEffectMultipleColorComponent.h"

UKoratEffectMultipleColorComponent::UKoratEffectMultipleColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideColorSourceFlag = false;
}

bool UKoratEffectMultipleColorComponent::SetSourceColor(const FKoratEffectColorDataDetail& InSourceColorData) {
    return false;
}

void UKoratEffectMultipleColorComponent::SetReplaceTypeFormSequencer(const int32 InIndex, const FKoratCharacterEffectColorReplaceTypeDataList& InNewReplaceType) {
}

FKoratEffectColorDataDetail UKoratEffectMultipleColorComponent::GetSourceColor() {
    return FKoratEffectColorDataDetail{};
}

FKoratCharacterEffectColorSetDataTypeDataList UKoratEffectMultipleColorComponent::GetColorType() const {
    return FKoratCharacterEffectColorSetDataTypeDataList{};
}


