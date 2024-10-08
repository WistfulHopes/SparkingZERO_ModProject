#include "SSTournamentEditData.h"

FSSTournamentEditData::FSSTournamentEditData() {
    this->Timelimit = 0;
    this->MemberRule = EKoratBattleMemberRule::None;
    this->MaxDP = 0;
    this->bDisableMemberChange = false;
    this->bEnableCharacterSelect = false;
    this->ZItemCustomizeType = 0;
    this->HealthRecoveryMode = 0;
    this->HealthRecoveryPercentage = 0;
    this->bEnableFly = false;
    this->bEnableOutOfField = false;
    this->bUsedSlot = false;
}

