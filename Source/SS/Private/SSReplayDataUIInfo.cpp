#include "SSReplayDataUIInfo.h"

FSSReplayDataUIInfo::FSSReplayDataUIInfo() {
    this->ReplayDataUIInfoVersion = 0;
    this->isNew = false;
    this->UIBattleMode = ESSReplayDataUIBattleMode::None;
    this->WinLose = ESSReplayDataUWinLose::None;
    this->FavoriteMark = 0;
    this->MajorVersionInt = 0;
    this->ContentVersionInt = 0;
    this->SaveDataVersionInt = 0;
    this->ServerVersionInt = 0;
    this->BattleVersionInt = 0;
    this->bLiveCommentary = false;
    this->SideIcon = 0;
}

