#include "SSDebugCutEditorTestMenuManager.h"

USSDebugCutEditorTestMenuManager::USSDebugCutEditorTestMenuManager() {
}

bool USSDebugCutEditorTestMenuManager::SetupStart(const FText& InSelectedStage, const TArray<FText>& InSelectedCharacters, const TArray<FText>& InSelectedCharacterStarts, const FText& InSelectedCutType) {
    return false;
}

void USSDebugCutEditorTestMenuManager::SetupGoBack(const FText& InSelectedStage, const TArray<FText>& InSelectedCharacters, const TArray<FText>& InSelectedCharacterStarts, const FText& InSelectedCutType) {
}

void USSDebugCutEditorTestMenuManager::SaveSetting(const FText& InSelectedStage, const TArray<FText>& InSelectedCharacters, const TArray<FText>& InSelectedCharacterStarts, const FText& InSelectedCutType) {
}

void USSDebugCutEditorTestMenuManager::GoToDebugCutEditorTest(const bool bInIsAlwaysGo) {
}

void USSDebugCutEditorTestMenuManager::GetStageSelectParameter(bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem) {
}

void USSDebugCutEditorTestMenuManager::GetCutTypeSelectParameter(bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem) {
}

void USSDebugCutEditorTestMenuManager::GetCharacterStartSelectParameter(bool bInUseSaveSetting, int32 InCharacterStartIndex, TArray<FText>& OutItems, FText& OutCurrentItem) {
}

void USSDebugCutEditorTestMenuManager::GetCharacterSelectParameter(bool bInUseSaveSetting, int32 InCharacterIndex, TArray<FText>& OutItems, FText& OutCurrentItem) {
}


