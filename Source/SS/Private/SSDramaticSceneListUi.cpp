#include "SSDramaticSceneListUi.h"

USSDramaticSceneListUi::USSDramaticSceneListUi() {
    this->bIsEditorMode = true;
    this->DecideNum = 0;
    this->NowDecideStatus = EKoratDramaticSceneListDecideStatus::None;
}

void USSDramaticSceneListUi::SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticSceneListUi::OnSelectPanel() {
}


