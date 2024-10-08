#include "SSTournamentDataAsset.h"

USSTournamentDataAsset::USSTournamentDataAsset() {
    this->Timelimit = ETournamentTimeLimit::Time180;
    this->MemberRule = EKoratBattleMemberRule::None;
    this->MaxDP = 0;
    this->bDisableMemberChange = false;
    this->bEnableCharacterSelect = false;
    this->ZItemCustomizeType = ETournamentZItemCustomizeType::Enable;
    this->HealthRecoveryMode = EKoratHealthRecoveryMode::None;
    this->HealthRecoveryPercentage = 0;
    this->bEnableFly = false;
    this->bEnableOutOfField = false;
    this->EntryAnimType = ETournamentEntryAnimType::EntryAnim_000;
}


