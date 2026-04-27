#include "KoratBattleDirectingData.h"

FKoratBattleDirectingData::FKoratBattleDirectingData() {
    this->BattleMenu = EKoratBattleMenu::SetupBattle;
    this->BattleFormat = EKoratBattleFormat::OneVsOne;
    this->BattleMemberRule = EKoratBattleMemberRule::None;
    this->Timelimit = 0.00f;
    this->bEnhanceditems = false;
    this->bOutField = false;
    this->bNoMartialArts = false;
    this->DamageCorrection = EKoratBattleDamageCorrection::Normal;
    this->MaxDP = 0;
    this->bSuddenlySparking = false;
    this->bSearchOffStart = false;
    this->bDisableCharacterSilhouetteInZSearchOff = false;
    this->bLiveCommentary = false;
}

