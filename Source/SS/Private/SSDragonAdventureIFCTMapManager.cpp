#include "SSDragonAdventureIFCTMapManager.h"

USSDragonAdventureIFCTMapManager::USSDragonAdventureIFCTMapManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
}



int32 USSDragonAdventureIFCTMapManager::GetCurrentRowIndex() const {
    return 0;
}

EChangeRowType USSDragonAdventureIFCTMapManager::GetChangeRowType() const {
    return EChangeRowType::Row_00to01;
}


