#include "SSAiActionDataList.h"

FSSAiActionDataList::FSSAiActionDataList() {
    this->SortId = 0;
    this->IdleWaitTimeOutSec = 0.00f;
    this->CoolSec = 0.00f;
    this->bDontCheckDragonDashStop = false;
    this->bWaitType = false;
    this->bDontWaitIdle = false;
    this->bDontGuardCancel = false;
    this->bDontAscertainCancel = false;
    this->bDontSuperCounterCancel = false;
    this->bNoHitProbabilityDown = false;
}

