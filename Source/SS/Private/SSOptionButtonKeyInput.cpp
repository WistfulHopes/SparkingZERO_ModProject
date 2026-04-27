#include "SSOptionButtonKeyInput.h"

USSOptionButtonKeyInput::USSOptionButtonKeyInput() {
    this->bIsFocusable = false;
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->DefaultItemIndex = 0;
}


void USSOptionButtonKeyInput::OnChangeOperationType() {
}



bool USSOptionButtonKeyInput::GetIsChanging() {
    return false;
}


