#include "KoratBattleModeNSRContinueCharaData.h"

FKoratBattleModeNSRContinueCharaData::FKoratBattleModeNSRContinueCharaData() {
    this->HPGaugeValue = 0.00f;
    this->BattleState = ECharacterBattleState::Normal;
    this->SPGaugeValue = 0.00f;
    this->SparkingGaugeValue = 0.00f;
    this->LimitBoostGaugeValue = 0.00f;
    this->BlastStockCount = 0;
    this->BlastGaugeValue = 0.00f;
    this->StyleChangeWaitSecond = 0.00f;
    this->ChangeWaitSecond = 0.00f;
    this->StyleChangeWaitSecondMax = 0.00f;
    this->ChangeWaitSecondMax = 0.00f;
    this->bKnockDown = false;
    this->NextSkillGaugeGainHP = 0.00f;
    this->bDoneLastOneHPSkillGaugeGain = false;
    this->AddMaxHP = 0.00f;
    this->bBodyChanged = false;
    this->SmashLevel = 0;
    this->StyleChangePowerupCount = 0;
}

