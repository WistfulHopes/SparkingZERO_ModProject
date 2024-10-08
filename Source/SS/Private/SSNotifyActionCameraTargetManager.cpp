#include "SSNotifyActionCameraTargetManager.h"
#include "Templates/SubclassOf.h"

USSNotifyActionCameraTargetManager::USSNotifyActionCameraTargetManager() {
}

ASSNotifyActionCameraTargetActor* USSNotifyActionCameraTargetManager::SpawnNotifyActionCameraTargetActor(const FSSNotifyActionCameraTargetSpawnParameters& InSpawnParameters, UWorld* InWorld) {
    return NULL;
}

void USSNotifyActionCameraTargetManager::RemoveNotifyActionCameraTargetActorAll() {
}

void USSNotifyActionCameraTargetManager::RemoveNotifyActionCameraTargetActor(const FSSNotifyActionCameraTargetSpawnParameters& InSpawnParameters) {
}

void USSNotifyActionCameraTargetManager::Initialize(const TSubclassOf<ASSNotifyActionCameraTargetActor> InActorClass) {
}

ASSNotifyActionCameraTargetActor* USSNotifyActionCameraTargetManager::FindNotifyActionCameraTargetActor(AController* InController, ENewBattleCameraType InBattleCameraType) {
    return NULL;
}


