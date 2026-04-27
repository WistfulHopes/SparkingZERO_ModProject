#include "SSTitleDataAsset.h"

USSTitleDataAsset::USSTitleDataAsset() {
    this->IdAddedInfoType = ESSTitleIdAddedInfoType::None;
    this->ShowIndex = 0;
    this->UnLockType = EKoratUnLockType::Non;
    this->TitleValue = -1;
    this->bIsCollapsedOnLocked = false;
}


