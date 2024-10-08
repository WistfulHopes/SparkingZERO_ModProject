#include "KoratBattlePlayCharacter.h"

FKoratBattlePlayCharacter::FKoratBattlePlayCharacter() {
    this->bReplaceCharacterCamera = false;
    this->BattleControlMode = EKoratBattleControlMode::Pad;
    this->bKnockDown = false;
    this->bBlowIsFront = false;
    this->bRingOut = false;
    this->HPGaugeValue = 0.00f;
    this->HPGaugeValueMax = 0.00f;
    this->SPGaugeValue = 0.00f;
    this->BlastStockCount = 0;
    this->BlastGaugeValue = 0.00f;
    this->NextSkillGaugeGainHP = 0.00f;
    this->AddMaxHP = 0.00f;
    this->CpuLevel = 0;
    this->CostumeDamageLv = 0;
    this->CostumeScratchLv = 0;
}

