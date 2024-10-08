#include "SSCharacterStorage.h"

USSCharacterStorage::USSCharacterStorage() {
    this->bDestroyRequest = false;
    this->CharacterFactory = NULL;
    this->Character = NULL;
    this->ExtendMLSDataAsset = NULL;
    this->InstanceType = EKoratCharacterInstanceType::Battle;
    this->PlaySide = 0;
    this->bValidEquipItems = false;
}


