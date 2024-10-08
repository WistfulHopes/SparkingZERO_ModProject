#include "SSBattleLoadingFunctionLibrary.h"

USSBattleLoadingFunctionLibrary::USSBattleLoadingFunctionLibrary() {
}

void USSBattleLoadingFunctionLibrary::StartPreloadContainer(const UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void USSBattleLoadingFunctionLibrary::SetPreloading(bool Enable) {
}

bool USSBattleLoadingFunctionLibrary::IsPreloading() {
    return false;
}

void USSBattleLoadingFunctionLibrary::GetSublevelPreloadedCount(const UObject* WorldContextObject, int32& loadedCount, int32& requestCount) {
}

void USSBattleLoadingFunctionLibrary::GetPreloadedCount(const UObject* WorldContextObject, int32& finishContainerCount, int32& requestContainerCount, int32& loadedObjectCount, int32& requestObjectCount) {
}

USSBattleLoadingSubsystem* USSBattleLoadingFunctionLibrary::GetBattleLoadingSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

void USSBattleLoadingFunctionLibrary::EndPreloading(const UObject* WorldContextObject) {
}

void USSBattleLoadingFunctionLibrary::ClearPreloadContainer(const UObject* WorldContextObject) {
}

void USSBattleLoadingFunctionLibrary::BeginPreloading(const UObject* WorldContextObject) {
}


