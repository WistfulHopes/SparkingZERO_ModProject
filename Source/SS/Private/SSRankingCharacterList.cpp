#include "SSRankingCharacterList.h"

USSRankingCharacterList::USSRankingCharacterList() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->CharacterNameText = NULL;
}

void USSRankingCharacterList::UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSRankingCharacterList::DecidedButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}


