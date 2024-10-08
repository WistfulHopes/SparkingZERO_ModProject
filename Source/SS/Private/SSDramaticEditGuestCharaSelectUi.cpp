#include "SSDramaticEditGuestCharaSelectUi.h"

USSDramaticEditGuestCharaSelectUi::USSDramaticEditGuestCharaSelectUi() {
    this->EmptyTexture = NULL;
    this->FocusButtonIndex = 0;
    this->SelectGuestCharaMode = EKoratSelectGuestCharacterUiMode::None;
    this->DeleteButton = NULL;
    this->ExchangeButton = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->HedderText = NULL;
}

void USSDramaticEditGuestCharaSelectUi::OnFocusGuestCharapanelExchange(USSMenuButton* InButton) {
}

void USSDramaticEditGuestCharaSelectUi::OnFocusCharapanelExchange(USSMenuButton* InButton) {
}

void USSDramaticEditGuestCharaSelectUi::OnFocusCharapanelDelete(USSMenuButton* InButton) {
}

void USSDramaticEditGuestCharaSelectUi::OnDecideExchangeButton() {
}

void USSDramaticEditGuestCharaSelectUi::OnDecideDeleteButton() {
}

void USSDramaticEditGuestCharaSelectUi::OnClickSideButton(USSMenuButton* InButton) {
}


