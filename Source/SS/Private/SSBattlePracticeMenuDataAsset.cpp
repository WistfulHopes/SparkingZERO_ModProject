#include "SSBattlePracticeMenuDataAsset.h"

USSBattlePracticeMenuDataAsset::USSBattlePracticeMenuDataAsset() {
    this->ModelAiLevel1P = 10;
    this->ModelAiLevel2P = 10;
    this->InitHpRatio = -1;
    this->InitSpRatio = -1;
    this->InitBlastStockCount = -1;
    this->SkillGaugeRecoveryRatio = 1.00f;
    this->TaketurnsCoolTimeRecoveryRatio = 1.00f;
    this->InitChangeWaitMax = false;
    this->InitStyleChangeMax = false;
    this->FailureTime = 3.00f;
    this->bBlackOutReset = false;
}


