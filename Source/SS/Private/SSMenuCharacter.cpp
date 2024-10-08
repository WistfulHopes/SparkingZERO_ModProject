#include "SSMenuCharacter.h"

ASSMenuCharacter::ASSMenuCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterReader = NULL;
    this->SSCharacter = NULL;
}

ASSCharacter* ASSMenuCharacter::Spawn() {
    return NULL;
}

bool ASSMenuCharacter::Load() {
    return false;
}

bool ASSMenuCharacter::IsSpawned() const {
    return false;
}

bool ASSMenuCharacter::IsLoading() const {
    return false;
}

bool ASSMenuCharacter::IsLoaded() const {
    return false;
}

bool ASSMenuCharacter::IsBusy() const {
    return false;
}

ASSCharacter* ASSMenuCharacter::GetSSCharacter() const {
    return NULL;
}

int32 ASSMenuCharacter::GetMenuCharacterID() const {
    return 0;
}

FKoratCharacterDataList ASSMenuCharacter::GetCharacterDataList() const {
    return FKoratCharacterDataList{};
}

void ASSMenuCharacter::DestroyCharacter() {
}


