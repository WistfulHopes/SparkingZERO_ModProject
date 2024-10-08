#include "SSDebugAdventureIFTestMenuManager.h"

USSDebugAdventureIFTestMenuManager::USSDebugAdventureIFTestMenuManager() {
}

void USSDebugAdventureIFTestMenuManager::StartAging(const FText& InSelectedCharacter, const FText& InSelectedEvent) {
}

bool USSDebugAdventureIFTestMenuManager::SetupSelectedEvent(const FText& InSelectedCharacter, const FText& InSelectedEvent, bool bInEventRepeat, ESSDragonAdventureIFEventDataType& OutEventType) {
    return false;
}

void USSDebugAdventureIFTestMenuManager::SetupGoBack(const FText& InSelectedCharacter, const FText& InSelectedEvent, bool bInEventRepeat) {
}

void USSDebugAdventureIFTestMenuManager::SetAgingFirstPersonCamera(bool InFirstPersonCamera) const {
}

void USSDebugAdventureIFTestMenuManager::SaveSetting(const FText& InSelectedCharacter, const FText& InSelectedEvent, bool bInEventRepeat) {
}

bool USSDebugAdventureIFTestMenuManager::IsAgingFirstPersonCamera() const {
    return false;
}

void USSDebugAdventureIFTestMenuManager::GoToDebugAdventureIFTest(const bool bInIsAlwaysGo) {
}

void USSDebugAdventureIFTestMenuManager::GetSelectedEventDisplayInfomation(const FText& InSelectedCharacter, const FText& InSelectedEvent, FText& OutRouteName, FText& OutChapterName, FText& OutTitle, FText& OutRouteTitle, FText& OutExplanation, FText& OutEventBlockName, FText& OutEventNumberPerTotal, FText& OutEventDataName) {
}

void USSDebugAdventureIFTestMenuManager::GetEventSelectParameter(const FText& InSelectedCharacter, bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem) {
}

bool USSDebugAdventureIFTestMenuManager::GetEventRepeatSelectParameter() const {
    return false;
}

void USSDebugAdventureIFTestMenuManager::GetCharacterSelectParameter(bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem) {
}

void USSDebugAdventureIFTestMenuManager::ChangeToPrevPart(const FText& InSelectedEvent, TArray<FText>& OutEventItems, FText& OutCurrentEventItem) {
}

void USSDebugAdventureIFTestMenuManager::ChangeToNextPart(const FText& InSelectedEvent, TArray<FText>& OutEventItems, FText& OutCurrentEventItem) {
}


