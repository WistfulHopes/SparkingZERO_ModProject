#include "KoratMultiCharacterColorComponent.h"

UKoratMultiCharacterColorComponent::UKoratMultiCharacterColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseCharacter01 = NULL;
    this->UseCharacter02 = NULL;
}

void UKoratMultiCharacterColorComponent::SetUseCharacter02(ASSCharacter* InCharacter) {
}

void UKoratMultiCharacterColorComponent::SetUseCharacter01(ASSCharacter* InCharacter) {
}

bool UKoratMultiCharacterColorComponent::RemoveCharacter(ASSCharacter* InCharacter) {
    return false;
}

bool UKoratMultiCharacterColorComponent::AddCharacter(ASSCharacter* InCharacter) {
    return false;
}


