#include "SSCharacterFormChangeParam.h"

FSSCharacterFormChangeParam::FSSCharacterFormChangeParam() {
    this->CharacterChangeMode = EKoratCharacterChangeMode::None;
    this->KeepCostumeFlg = false;
    this->KeepCostumeID = false;
    this->CostumeDamageFlg = false;
    this->CostumeDamageLv = 0;
    this->CostumeScratchLv = 0;
    this->ConsumeBlastStock = 0;
    this->HpRecovery = 0.00f;
    this->AddMaxHP = 0.00f;
    this->StyleChangeSPRecoveryMode = EKoratStyleChangeSPRecoveryMode::Default;
    this->CoolTime = 0.00f;
    this->PartnerChangeOkFlg = false;
    this->FaceChipTextureP1 = NULL;
    this->FaceChipTextureP2 = NULL;
}

