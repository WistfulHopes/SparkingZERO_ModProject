#include "KoratSequenceManager.h"

UKoratSequenceManager::UKoratSequenceManager() {
}

void UKoratSequenceManager::UpdateOverrideTransformForSequenceActorInteract(ASSLevelSequenceActor* InSequenceActor, const FHitResult& InHitResult, const bool InbApplyNormal) {
}

void UKoratSequenceManager::UpdateOverrideTransformForSequenceActor(ASSLevelSequenceActor* InSequenceActor, const FTransform& InTransform) {
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnSequenceActorSyncFreeTimeline(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, const bool bOverrideTransform, const FTransform& OverrideTransform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnSequenceActorForInteractWithSection(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySection, const FHitResult& InHitResult, UObject* InRelatedSourceObject, const bool InbApplyNormal, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnSequenceActorForInteract(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const FHitResult& InHitResult, UObject* InRelatedSourceObject, const bool InbApplyNormal, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnSequenceActorAndTransformForInteractWithSection(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySection, const FTransform& InTransform, UObject* InRelatedSourceObject, const FKoratInteractAttributeData& InInteractAttribute, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnSequenceActorAndTransformForInteract(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const FTransform& InTransform, UObject* InRelatedSourceObject, const FKoratInteractAttributeData& InInteractAttribute, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnLevelSequenceActorFromParams(AActor* InOwnerActor, ASSCharacter* InRootCharacter, ULevelSequence* InLevelSequence, UObject* SourceObject, const FName InActionDataKey, const FName ManagedId) {
    return NULL;
}

ASSLevelSequenceActor2* UKoratSequenceManager::SpawnLevelSequenceActor2(const FKoratLevelSequenceActorSpawnParameters& InParams, UObject* SourceObject) {
    return NULL;
}

ASSLevelSequenceActor* UKoratSequenceManager::SpawnLevelSequenceActor(const FKoratLevelSequenceActorSpawnParameters& InParams, UObject* SourceObject) {
    return NULL;
}

void UKoratSequenceManager::SetupRebindCharacterOld(ASSLevelSequenceActor* InSequenceActor, AActor* InRebindTargetActor, const bool InbEnablePlayerTransformTrack, const bool InbEnablePlayerAnimationTrack) {
}

bool UKoratSequenceManager::SetupKoratOverrideTransformActor(ASSLevelSequenceActor* InSequenceActor, const FKoratOverrideTransformDescription& InSetting) {
    return false;
}

void UKoratSequenceManager::SetupEtcResource(ASSLevelSequenceActor* InSequenceActor, ASSCharacter* InSrcCharacter) {
}

bool UKoratSequenceManager::RebindSystemsArray(ASSLevelSequenceActor* InSequenceActor, const TArray<FKoratRebindDescription>& InRebindSettingArray) {
    return false;
}

bool UKoratSequenceManager::RebindSystems(ASSLevelSequenceActor* InSequenceActor, const FKoratRebindDescription& InRebindSetting) {
    return false;
}

bool UKoratSequenceManager::RebindCamera(ASSLevelSequenceActor* InSequecnceActor, const FKoratSequenceCameraDescription& InCameraParams, const TMap<FString, ASSCharacter*>& InRebindCharacters) {
    return false;
}

FString UKoratSequenceManager::GetRebindTargetCharacterRegex() {
    return TEXT("");
}

FString UKoratSequenceManager::GetRebindCharacterRegex() {
    return TEXT("");
}

FKoratInteractAtbTypeDataList UKoratSequenceManager::GetInteractAtbType(UObject* InWorldContextObject, const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) {
    return FKoratInteractAtbTypeDataList{};
}

bool UKoratSequenceManager::CheckAndSetupRebindActor(ASSLevelSequenceActor* InSequenceActor) {
    return false;
}


