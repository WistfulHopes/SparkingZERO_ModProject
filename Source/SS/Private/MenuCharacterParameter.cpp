#include "MenuCharacterParameter.h"

FMenuCharacterParameter::FMenuCharacterParameter() {
    this->bInAsync = false;
    this->bIsUnload = false;
    this->LoadDelay = 0.00f;
    this->bIsAutoSpawn = false;
    this->SpawnPlaySide = 0;
    this->InstanceType = EKoratCharacterInstanceType::Battle;
}

