#include "KoratObjectLimitManager.h"

UKoratObjectLimitManager::UKoratObjectLimitManager() {
}

bool UKoratObjectLimitManager::ValidateContinuouslyRespawnOffOfClass(ULevelSequence* LevelSequence, const FGuid& BindingId, const UClass* ClassObject, FString& OutText) {
    return false;
}

void UKoratObjectLimitManager::UnregisterObject(UObject* Object) {
}

void UKoratObjectLimitManager::ResetLimit() {
}

void UKoratObjectLimitManager::RegisterObject(UObject* Object) {
}

void UKoratObjectLimitManager::OverwriteLimit(const FKoratMapDataList& MapDataList) {
}

bool UKoratObjectLimitManager::IsUseAbleObject(UObject* InObject) {
    return false;
}

bool UKoratObjectLimitManager::IsRegistered(UObject* Object) const {
    return false;
}

bool UKoratObjectLimitManager::IsOverlaping(UObject* One, UObject* Another) {
    return false;
}

UKoratObjectLimitManager* UKoratObjectLimitManager::GetInstance() {
    return NULL;
}

void UKoratObjectLimitManager::ClearObjects() {
}

FKoratOrientedBox UKoratObjectLimitManager::BuildOrientedBox(const FTransform& ToWorldTransform, const FVector& BoxExtent) {
    return FKoratOrientedBox{};
}


