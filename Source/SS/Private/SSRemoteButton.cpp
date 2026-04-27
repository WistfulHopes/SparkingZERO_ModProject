#include "SSRemoteButton.h"
#include "Components/SlateWrapperTypes.h"

USSRemoteButton::USSRemoteButton() {
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->caption = NULL;
    this->BindImage = NULL;
    this->TextureResourceObject = NULL;
}












void USSRemoteButton::CallEventFromName(FName InFuncName) {
}


