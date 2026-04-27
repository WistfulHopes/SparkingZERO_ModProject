#include "SSGalleryPictureBookCharaInfoManager.h"

USSGalleryPictureBookCharaInfoManager::USSGalleryPictureBookCharaInfoManager() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->ScrollBox = NULL;
    this->BuiltInMenu = NULL;
}



bool USSGalleryPictureBookCharaInfoManager::IsFirstPage() const {
    return false;
}


