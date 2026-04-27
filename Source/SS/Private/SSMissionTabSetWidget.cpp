#include "SSMissionTabSetWidget.h"

USSMissionTabSetWidget::USSMissionTabSetWidget() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->PlaySideButton = NULL;
}

void USSMissionTabSetWidget::OnClickSideButton(USSMenuButton* InButton) {
}

void USSMissionTabSetWidget::ButtonClickAnimControl(USSMenuButton* InButton) {
}


