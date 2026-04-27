#include "SSDramaticThumbnailWidget.h"

USSDramaticThumbnailWidget::USSDramaticThumbnailWidget() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->bIsAnimStarted = false;
    this->NowDisplaySlideTexture = NULL;
    this->FocusTime = 0.00f;
    this->ThumbnailChangeTime = 0.00f;
    this->NowShowingThumbnailIdx = 0;
    this->TempIcon = NULL;
}


