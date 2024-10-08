#include "SSRemoteButton.h"
#include "Components/SlateWrapperTypes.h"

USSRemoteButton::USSRemoteButton() {
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->caption = NULL;
    this->BindImage = NULL;
    this->TextureResourceObject = NULL;
}












void USSRemoteButton::CallEventFromName(FName InFuncName) {
}


