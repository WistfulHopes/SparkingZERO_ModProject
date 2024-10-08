#include "SSBlastSkillDataAsset.h"

USSBlastSkillDataAsset::USSBlastSkillDataAsset() {
    this->LungeSpeed = 0.00f;
    this->ReloadTime = 2.00f;
    this->ExpendEnergy = 10000;
    this->TriggerExpendEnergy = 10000;
    this->ExpendHelth = 0;
    this->StealHelth = 0;
    this->MaxChargeTime = 2.00f;
    this->MaxChargeDamageRate = 1.50f;
    this->bCanBlastImpact = false;
    this->BlastImpactPower = 0;
    this->bCanSpeedImpact = false;
    this->bWeakSpecialShield = false;
    this->bIsEnableHideNearDestructionStaticMesh = true;
    this->bDoVanishingWhenDoBlastCombo = false;
    this->VanishingDistance = 0.00f;
}

void USSBlastSkillDataAsset::SortBlastDemoBranchArray() {
}


