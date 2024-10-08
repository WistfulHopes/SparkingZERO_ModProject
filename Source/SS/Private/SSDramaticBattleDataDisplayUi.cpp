#include "SSDramaticBattleDataDisplayUi.h"

USSDramaticBattleDataDisplayUi::USSDramaticBattleDataDisplayUi() {
    this->ClearRateText = FText::FromString(TEXT("TR_UI_ONLINE_1436"));
    this->ClearCountText = FText::FromString(TEXT("TR_UI_DBATTLE_000_155"));
    this->NotPlayedText = FText::FromString(TEXT("TR_UI_DBATTLE_000_152"));
    this->DisplayBattleData = NULL;
}

void USSDramaticBattleDataDisplayUi::OnWLibDataUpdate(bool bIsClear, const TArray<uint64>& InBattleId) {
}


