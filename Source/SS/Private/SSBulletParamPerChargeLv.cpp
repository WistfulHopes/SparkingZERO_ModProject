#include "SSBulletParamPerChargeLv.h"

FSSBulletParamPerChargeLv::FSSBulletParamPerChargeLv() {
    this->DamageRate = 0.00f;
    this->FireNum = 0;
    this->EnergyBullectCollisionPriority = 0;
    this->SpeedScale = 0.00f;
    this->HomingScale = 0.00f;
    this->bIgnoreActionTarget = false;
    this->bReduceZSearchAfterHit = false;
    this->ReduceZSearchEffectTime = 0.00f;
    this->bEnableBuff = false;
    this->BuffIndex = 0;
}

