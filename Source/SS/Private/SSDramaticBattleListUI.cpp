#include "SSDramaticBattleListUI.h"

USSDramaticBattleListUI::USSDramaticBattleListUI() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->bIsCreateNew = false;
    this->NowDisplayMode = EKoratMenuDramaticMode::None;
    this->bSetCopyList = false;
    this->PrevDataIndex = 0;
    this->bIsModeSelectingList = false;
}


