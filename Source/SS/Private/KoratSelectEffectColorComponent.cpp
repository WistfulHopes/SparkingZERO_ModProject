#include "KoratSelectEffectColorComponent.h"

UKoratSelectEffectColorComponent::UKoratSelectEffectColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColorTypeDataListArray.AddDefaulted(3);
    this->ColorSourceByCharacter = NULL;
    this->ChangeColorCharacter = NULL;
}

bool UKoratSelectEffectColorComponent::SetSourceColor(const FKoratEffectColorDataDetail& InSourceColorData) {
    return false;
}

void UKoratSelectEffectColorComponent::SetColorTypeIndex(const EKoratCharacterEffectOutlineColorType InIndex, const FKoratCharacterEffectColorSetDataTypeDataList& InNewType) {
}

void UKoratSelectEffectColorComponent::SetColorSourceByCharacter_Implementation(const ASSCharacter* InCharacter) {
}

void UKoratSelectEffectColorComponent::OnChanedBuffForm(const FKoratBuffFormTypeDataList& InPreForm, const FKoratBuffFormTypeDataList& InNewForm) {
}

FKoratEffectColorDataDetail UKoratSelectEffectColorComponent::GetSourceColor() {
    return FKoratEffectColorDataDetail{};
}

bool UKoratSelectEffectColorComponent::GetParticle(const FString& InParticleName, UParticleSystem*& OutParticle) {
    return false;
}

FKoratCharacterEffectColorSetDataTypeDataList UKoratSelectEffectColorComponent::GetColorType(const int32 InIndex) const {
    return FKoratCharacterEffectColorSetDataTypeDataList{};
}

bool UKoratSelectEffectColorComponent::GetColorFromIndex(const int32 InIndex, FKoratCharacterEffectColorSetData& OutColor, const bool InNotFoundReturnDefualt) {
    return false;
}

bool UKoratSelectEffectColorComponent::GetColor(FKoratCharacterEffectColorSetData& OutColor, const bool InNotFoundReturnDefualt) {
    return false;
}

void UKoratSelectEffectColorComponent::ForceUpdateColor() {
}

bool UKoratSelectEffectColorComponent::EnableUpdateApply() {
    return false;
}


