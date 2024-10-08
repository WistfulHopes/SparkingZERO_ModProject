#include "SSCharacterBlastSkill.h"

USSCharacterBlastSkill::USSCharacterBlastSkill() {
    this->BlastSkill1Data = NULL;
    this->BlastSkill2Data = NULL;
    this->HitBackMovementData = NULL;
    this->EffectExpData = NULL;
    this->EffectHitData = NULL;
    this->EffectRatData = NULL;
    this->EffectStaData = NULL;
    this->EquipmentPointLightData = NULL;
    this->EquipmentRimLightData = NULL;
    this->WorldPointLightData = NULL;
    this->ItemEquipment = NULL;
}

UAnimSequence* USSCharacterBlastSkill::GetBlastDashAnimOverrideOfBlastSkill2(ESSBlastDemoBranchType InType) const {
    return NULL;
}

UAnimSequence* USSCharacterBlastSkill::GetBlastDashAnimOverrideOfBlastSkill1(ESSBlastDemoBranchType InType) const {
    return NULL;
}


