#include "SSCharacterArmor.h"

USSCharacterArmor::USSCharacterArmor() {
    this->ArmorData = NULL;
    this->ArmorBreakLevelData = NULL;
    this->ArmorLevelData = NULL;
    this->CharacterNumeric = NULL;
    this->MaxArmorBreakLevel = 9;
    this->IsThereHyperArmor = false;
    this->CanSparkingArmor = true;
    this->ArmorLevelSourceObject = NULL;
    this->UseArmorCount = 0;
    this->bArmorDebug = false;
    this->DebugDetailLevel = 0;
}


