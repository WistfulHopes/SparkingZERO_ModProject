#include "SSCharacterItemEquipmentSetting.h"

FSSCharacterItemEquipmentSetting::FSSCharacterItemEquipmentSetting() {
    this->HPPer = 0;
    this->SPPer = 0;
    this->StockNum = 0;
    this->DP = 0;
    this->ExParam = 0;
    this->bIsSparking = false;
    this->bIsLockOn = false;
    this->bIsInWater = false;
    this->bIsDown = false;
    this->EmoteDuration = 0.00f;
    this->bAtBattleStart = false;
    this->bAtCharacterEntry = false;
    this->bAtFastAvoidanceBlast = false;
    this->bAtEmoteStart = false;
    this->bAtGuardCrash = false;
    this->bAtSparking = false;
    this->bAtDestroyEnemy = false;
    this->bAtUltimateBlast = false;
    this->bAtNoHitBlast = false;
}

