#include "SSCharacterEnergyBulletParameter.h"

FSSCharacterEnergyBulletParameter::FSSCharacterEnergyBulletParameter() {
    this->bPointLightIsValid = false;
    this->bColorSetIsValid = false;
    this->BulletWindMotorRadius = 0.00f;
    this->BulletWindMotorSpeed = 0.00f;
    this->bIsGiant_DamageMovement1 = false;
    this->bIsGiant_DamageMovement2 = false;
    this->bIsGiant_HitStop = false;
    this->bIsGiant_GuardMovement2 = false;
    this->bIsGiant_GuardStop = false;
    this->bIsGiant_BottomDamageMovement1 = false;
    this->bIsGiant_BottomDamageMovement2 = false;
    this->bLockRoll = false;
    this->ParamDataAsset = NULL;
}

