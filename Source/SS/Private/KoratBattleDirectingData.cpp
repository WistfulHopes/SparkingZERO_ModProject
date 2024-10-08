#include "KoratBattleDirectingData.h"

FKoratBattleDirectingData::FKoratBattleDirectingData() {
    this->BattleMenu = EKoratBattleMenu::SetupBattle;
    this->BattleFormat = EKoratBattleFormat::OneVsOne;
    this->BattleMemberRule = EKoratBattleMemberRule::None;
    this->Timelimit = 0.00f;
    this->bEnhanceditems = false;
    this->bOutField = false;
    this->bNoMartialArts = false;
    this->bSuddenlySparking = false;
    this->bLiveCommentary = false;
}

