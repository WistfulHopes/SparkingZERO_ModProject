#include "SpUIWindow.h"

USpUIWindow::USpUIWindow() {
    this->bAutoSize = false;
    this->HasTitleBar = true;
    this->WindowTitle = TEXT("WindowTitle");
}

void USpUIWindow::SetWindowPosition(const FVector2D& InPosition) {
}

void USpUIWindow::DestroyWindow() {
}


