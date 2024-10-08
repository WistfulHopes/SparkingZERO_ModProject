#include "SSDramaticBattleListUIBase.h"

USSDramaticBattleListUIBase::USSDramaticBattleListUIBase() {
    this->NowSelectingBattle = -1;
    this->BeforeFocusButton = NULL;
    this->FocusTime = 0.00f;
    this->ThumbnailChangeTime = 0.00f;
    this->NowShowingThumbnailIdx = -1;
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->NowCategory = EKortaDramticBattleCategory::None;
    this->CurrentCategory = 0;
    this->ListStatus = EKoratDramaticListStatus::None;
    this->DefaultFocusIdx = 0;
    this->bIsDispCheckBox = false;
    this->bIsAnimStarted = false;
    this->NowDisplaySlideTexture = NULL;
}

void USSDramaticBattleListUIBase::OnUpdateFocusPanel(USSMenuButton* InButton) {
}

void USSDramaticBattleListUIBase::OnSetupPanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticBattleListUIBase::OnSelectPanel() {
}

void USSDramaticBattleListUIBase::OnCategoryChanged(USSMenuButton* InButton) {
}


