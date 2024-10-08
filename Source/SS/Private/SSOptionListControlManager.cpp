#include "SSOptionListControlManager.h"

USSOptionListControlManager::USSOptionListControlManager() {
    this->KeySetModeFocusWidget = NULL;
}

void USSOptionListControlManager::OnChangingKey(USSMenuButton* InKeyButton) {
}

void USSOptionListControlManager::OnChangeValueVibration(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValuePlayerType(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValuePanelControlType(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValueOperationTypeButton(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValueOperationKeyButton(const FSSOptionButtonKeyInputItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValueImpactInputType(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValueControlStyle() {
}

void USSOptionListControlManager::OnChangeValueCameraUDSpeedButton(const float InChangeGauge) {
}

void USSOptionListControlManager::OnChangeValueCameraUDReverse(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValueCameraLRSpeedButton(const float InChangeGauge) {
}

void USSOptionListControlManager::OnChangeValueCameraLRReverse(const FSSMenuButtonTextItemEntry& InChangeItem) {
}

void USSOptionListControlManager::OnChangeValueAdaptivetrigger(const float InChangeGauge) {
}

void USSOptionListControlManager::OnChangeKeyOperationKeyButtonCancel(USSMenuButton* InKeyButton) {
}

void USSOptionListControlManager::OnChangeKeyOperationKeyButton(USSMenuButton* InKeyButton) {
}

bool USSOptionListControlManager::GetKeySetModeFlg() {
    return false;
}

bool USSOptionListControlManager::GetKeySetModeChekFlg() {
    return false;
}

void USSOptionListControlManager::ChkDateTime(float InDeltaTime) {
}

void USSOptionListControlManager::ButtonValueReset(const FString& ButtonName) {
}


