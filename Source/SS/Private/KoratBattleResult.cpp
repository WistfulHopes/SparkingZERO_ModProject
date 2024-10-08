#include "KoratBattleResult.h"

FKoratBattleResult::FKoratBattleResult() {
    this->BattleWinLose = EBattleWinLose::None;
    this->BattleSettlementIndex = 0;
    this->bToBadEnd = false;
    this->IsSpConclusion = false;
    this->BattleSettleTransitionType = EBattleSettleTransitionType::None;
    this->bSpecialFatePreBattleProduction = false;
    this->bDramaticFinish = false;
    this->BattleClearCount = 0;
    this->BattleAnotherClearCount = 0;
    this->bBattleAnotherClear = false;
    this->bResultStart = false;
}

