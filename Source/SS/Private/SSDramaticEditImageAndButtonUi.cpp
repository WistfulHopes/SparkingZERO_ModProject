#include "SSDramaticEditImageAndButtonUi.h"

USSDramaticEditImageAndButtonUi::USSDramaticEditImageAndButtonUi() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->TitleTextWidget = NULL;
    this->ScaleBoxTitleText = NULL;
    this->FocusTime = 0.00f;
    this->ThumbnailChangeTime = 0.00f;
    this->NowShowingThumbnailIdx = 0;
    this->ReserveHighrightButtonIndex = -1;
}


