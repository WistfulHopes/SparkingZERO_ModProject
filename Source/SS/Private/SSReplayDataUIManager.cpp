#include "SSReplayDataUIManager.h"

USSReplayDataUIManager::USSReplayDataUIManager() {
}

bool USSReplayDataUIManager::WasLastSaveDataOpSuccess() {
    return false;
}

bool USSReplayDataUIManager::IsWaitingSaveDataOp() {
    return false;
}

int32 USSReplayDataUIManager::GetReplayList(TArray<USSReplayDataUIElement*>& OutReplayDataList, const ESSReplayDataUISortCondition InSortCondition, const bool bInDescend, const bool bInFavoriteMark) {
    return 0;
}

FString USSReplayDataUIManager::GetLastSaveDataOpFailureMessage() {
    return TEXT("");
}

int32 USSReplayDataUIManager::GetAsyncResult() {
    return 0;
}

void USSReplayDataUIManager::AsyncSaveFavoriteAndNewMark(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const USSReplayDataUIElement* InReplayDataList, const int32 InFavoriteMark, const bool bInNew) {
}

void USSReplayDataUIManager::AsyncLoadReplayList(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ESSReplayDataUISortCondition InSortCondition, const bool bInDescend) {
}

void USSReplayDataUIManager::AsyncDelete(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TArray<USSReplayDataUIElement*>& InReplayDataList) {
}


