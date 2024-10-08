#include "SSMenuManager.h"

USSMenuManager::USSMenuManager() {
    this->KoratCustomNavigationRule = EKoratCustomNavigationRule::None;
    this->bDoWrapCustomNavigation = true;
    this->ShowHideAnimPattern = EKoratWidgetShowHideAnimPattern::Default;
    this->LastFocusedWidget = NULL;
}

void USSMenuManager::SetKeyboardFocusOnPossible() {
}

UWidget* USSMenuManager::GetGeometryNavigationWidget(EUINavigation InUINavigation, bool bInWrap) {
    return NULL;
}

UWidget* USSMenuManager::GetCustomNavigationWidget(EUINavigation InUINavigation) {
    return NULL;
}

void USSMenuManager::CallbackDecidedButton(USSMenuButton* InButton) {
}


