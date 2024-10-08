#include "SSDramaticRightWindowSceneUi.h"

USSDramaticRightWindowSceneUi::USSDramaticRightWindowSceneUi() {
    this->bIsEditorMode = true;
    this->DecideNum = 0;
    this->NowDecideStatus = EKoratDramaticSceneListDecideStatus::None;
}

void USSDramaticRightWindowSceneUi::SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticRightWindowSceneUi::OnSelectPanel() {
}

void USSDramaticRightWindowSceneUi::OnDecideButton(USSMenuButton* InHitButton) {
}


