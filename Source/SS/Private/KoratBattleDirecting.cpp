#include "KoratBattleDirecting.h"

FKoratBattleDirecting::FKoratBattleDirecting() {
    this->bValid = false;
    this->ActivationProbability = 0;
    this->NumOfActivation = 0;
    this->bRunConcluded = false;
    this->bExclusiveCondition = false;
    this->bAuto = false;
    this->BattleWaitCondition = EKoratBattleWaitConditions::None;
    this->BattleWaitTime = 0.00f;
    this->bConversationInterruptExecution = false;
    this->bDirectionSkip = false;
}

