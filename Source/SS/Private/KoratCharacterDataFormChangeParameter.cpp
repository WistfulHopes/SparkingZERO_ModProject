#include "KoratCharacterDataFormChangeParameter.h"

FKoratCharacterDataFormChangeParameter::FKoratCharacterDataFormChangeParameter() {
    this->KeepCostumeFlg = false;
    this->KeepCostumeID = false;
    this->CostumeDamageFlg = false;
    this->ConsumeBlastStock = 0;
    this->HpRecovery = 0.00f;
    this->StyleChangeSPRecoveryMode = EKoratStyleChangeSPRecoveryMode::Default;
    this->CoolTime = 0.00f;
    this->SafeSpawnAreaSize = EKoratSafeSpawnAreaSize::None;
}

