#include "SSMenuMissionListUI.h"

USSMenuMissionListUI::USSMenuMissionListUI() {
    this->PanelBaseWidget = NULL;
    this->StampWidget = NULL;
    this->StampSwitcher = NULL;
    this->SelectMissionPanel = NULL;
    this->SelectPanelNum = -1;
    this->bIsBalkStamping = false;
    this->bBalkStampingMoveAutoScroll = false;
    this->NowStampingPanelNum = -1;
    this->NextStampPanelIndex = -1;
    this->bIsAlreadyScrolled = false;
    this->AnimTime = 0.00f;
    this->StampWaitTime = 0.00f;
    this->RightWindowWidget = NULL;
    this->LeftWindowWidget = NULL;
    this->TabSetWidget = NULL;
}

void USSMenuMissionListUI::StampClearIcon(int32 InNumber) {
}

void USSMenuMissionListUI::SetPanelData(USSRemoteButton* InButton, int32 InDataIndex) {
}

void USSMenuMissionListUI::SaveRewardItem(FKoratMissionDataList& InMissionId, FSSMissionUserDataSaveData& InUserData) {
}

void USSMenuMissionListUI::OnSelectPanel() {
}

void USSMenuMissionListUI::OnFocusUnreadPanel(USSMenuButton* InButton) {
}

void USSMenuMissionListUI::NotShowMissionPartsHideStampNote() {
}


