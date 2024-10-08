#include "SSBlastUltimateDataAsset.h"

USSBlastUltimateDataAsset::USSBlastUltimateDataAsset() {
    this->bGaveAfterStateToBlowFalling = false;
    this->bGaveAfterStateToBlowFallingAlsoSIOT = false;
    this->LungeSpeed = 0.00f;
    this->ReloadTime = 2.00f;
    this->ExpendEnergy = 60000;
    this->TriggerExpendEnergy = 60000;
    this->ExpendHelth = 0;
    this->StealHelth = 0;
    this->MaxChargeTime = 2.00f;
    this->MaxChargeDamageRate = 1.50f;
    this->bCanBlastImpact = false;
    this->BlastImpactPower = 0;
    this->bCanSpeedImpact = false;
    this->bWeakSpecialShield = false;
    this->ConsecutiveInputMaxNum = 0;
    this->bIsEnableHideNearDestructionStaticMesh = true;
}

void USSBlastUltimateDataAsset::SortBlastDemoBranchArray() {
}


