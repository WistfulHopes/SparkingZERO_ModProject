#include "SSCharacterBlastUltimate.h"

USSCharacterBlastUltimate::USSCharacterBlastUltimate() {
    this->BlastUltimateData = NULL;
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

UAnimSequence* USSCharacterBlastUltimate::GetBlastDashAnimOverride(ESSBlastDemoBranchType InType) const {
    return NULL;
}


