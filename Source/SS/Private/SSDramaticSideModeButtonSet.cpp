#include "SSDramaticSideModeButtonSet.h"

USSDramaticSideModeButtonSet::USSDramaticSideModeButtonSet() {
    this->EditMode = EKoratDramaticEditButtonMode::None;
    this->ExtraButton = NULL;
    this->EditButton = NULL;
    this->EditNotPostedButton = NULL;
    this->EditPostedButton = NULL;
    this->EditDefaultMode = EKoratDramaticEditButtonMode::None;
    this->PlayAnimButton = NULL;
    this->FocusDramaticMode = EKoratMenuDramaticMode::None;
    this->FocusEditMode = EKoratDramaticEditButtonMode::None;
}

void USSDramaticSideModeButtonSet::OnUpdateFocus(USSMenuButton* InButton) {
}

void USSDramaticSideModeButtonSet::OnDecideEditModeButton(USSMenuButton* InButton) {
}

void USSDramaticSideModeButtonSet::OnDecideDramaticModeButton(USSMenuButton* InButton) {
}


