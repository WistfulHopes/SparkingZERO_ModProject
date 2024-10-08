#include "SSMenuCharacterManager.h"

ASSMenuCharacterManager::ASSMenuCharacterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextCharacterID = 0;
}

ASSCharacter* ASSMenuCharacterManager::SpawnCharacter(int32 InMenuCharacterID) {
    return NULL;
}

bool ASSMenuCharacterManager::LoadCharacter(int32 InMenuCharacterID) {
    return false;
}

bool ASSMenuCharacterManager::IsValidCharacterID(int32 InMenuCharacterID) {
    return false;
}

bool ASSMenuCharacterManager::IsCharacterSpawned(int32 InMenuCharacterID) const {
    return false;
}

bool ASSMenuCharacterManager::IsCharacterLoading(int32 InMenuCharacterID) const {
    return false;
}

bool ASSMenuCharacterManager::IsCharacterLoaded(int32 InMenuCharacterID) const {
    return false;
}

ASSCharacter* ASSMenuCharacterManager::GetCharacterSSCharacter(int32 InMenuCharacterID) const {
    return NULL;
}

int32 ASSMenuCharacterManager::GetCharacterNum() const {
    return 0;
}

ASSMenuCharacter* ASSMenuCharacterManager::GetCharacter(int32 InMenuCharacterID) const {
    return NULL;
}

void ASSMenuCharacterManager::DestroyCharacter(int32 InMenuCharacterID, bool InIsRequestGC) {
}

int32 ASSMenuCharacterManager::CreateCharacter(const FKoratCharacterDataList& InCharacterDataList, const FMenuCharacterParameter& InParameter) {
    return 0;
}


