#include "SSCharaSelectTeamList.h"

USSCharaSelectTeamList::USSCharaSelectTeamList() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->EmptyFaceTexture = NULL;
}

void USSCharaSelectTeamList::FocusedStartButton() {
}

void USSCharaSelectTeamList::FocusedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData) {
}

void USSCharaSelectTeamList::DecidedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData) {
}


