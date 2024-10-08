#include "SSMenuButton.h"
#include "Components/SlateWrapperTypes.h"

USSMenuButton::USSMenuButton() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->caption = NULL;
    this->BindImage = NULL;
    this->TextureResourceObject = NULL;
    this->RemoteButton = NULL;
    this->bIsDisabled = false;
    this->DisableToFocus = false;
    this->MouseScrollEventSnatchWidget = NULL;
    this->bIgnoreDecide = false;
}

void USSMenuButton::SetText(FText InText) {
}













