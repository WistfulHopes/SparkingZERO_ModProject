#include "SSEffectManager.h"
#include "KoratDecalActorManager.h"
#include "KoratDefaultIdClientManager.h"
#include "KoratRelatedEffectManager.h"

USSEffectManager::USSEffectManager() {
    this->EffectIdClientManager = CreateDefaultSubobject<UKoratDefaultIdClientManager>(TEXT("EffectIdClientManager"));
    this->RelatedEffectManager = CreateDefaultSubobject<UKoratRelatedEffectManager>(TEXT("RelatedEffectManager"));
    this->DecalActorManager = CreateDefaultSubobject<UKoratDecalActorManager>(TEXT("DecalActorManager"));
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorWithSetEffectColor(FSequenceActorSpawnParameters& InParameters, UObject* SourceObject) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorSyncMontage(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorSyncFreeTimeline(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, const bool bOverrideTransform, const FTransform& OverrideTransform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineDirectWithWorldPointLight(AActor* BaseActor, ULevelSequence* LevelSequence, bool bIsWorldPointLightValid, const FKoratCharacterPointLightData& WorldPointLight, const FTransform Transform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineDirect(AActor* BaseActor, ULevelSequence* LevelSequence, const FTransform Transform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineAtbBrk(AActor* OwnerActor, const EKoratFreeTimelineAtbBrkType TimeLineType, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineAtb(AActor* OwnerActor, const EKoratFreeTimelineAtbType TimeLineType, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimeline(AActor* OwnerActor, const EKoratFreeTimelineType TimeLineType, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForDemo(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const FName ManagedId, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorByHitEffectAfterHitStop(const FKoratHitEffectAfterHitStop& HitEffectAfterHitStop, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActor(const FSequenceActorSpawnParameters& InParameters, UObject* SourceObject) {
    return NULL;
}

void USSEffectManager::SetVisibleCharacterEffects(ASSCharacter* InChara, const bool bDisplayEnable, const bool bEnableTick) {
}

void USSEffectManager::SetOwnerActor(AActor* OwnerActor, AActor* EffectActor) {
}

void USSEffectManager::SetEnableTickCharacterEffects(ASSCharacter* InChara, const bool bEnableTick) {
}

void USSEffectManager::SetCharacterOutlineFillRate(AActor* InChara, const float InRate, const bool InbOutlineEnable) {
}

void USSEffectManager::SetCharacterOutlineFill(AActor* InChara, const bool InbEnable, const bool InbOutlineEnable) {
}

void USSEffectManager::SetCharacterOutline(AActor* InChara, const bool bEnable, const FName InTypeName) {
}

ULevelSequence* USSEffectManager::SelectCharacterFreeTimelineAtbBrk(AActor* OwnerActor, const EKoratFreeTimelineAtbBrkType TimeLineType, const FName AtbName) {
    return NULL;
}

ULevelSequence* USSEffectManager::SelectCharacterFreeTimelineAtb(AActor* OwnerActor, const EKoratFreeTimelineAtbType TimeLineType, const FName AtbName) {
    return NULL;
}

ULevelSequence* USSEffectManager::SelectCharacterFreeTimeline(AActor* OwnerActor, const EKoratFreeTimelineType TimeLineType, ULevelSequence*& CancelSequenceData) {
    return NULL;
}

bool USSEffectManager::RemoveSequencerKey(const FName Key) {
    return false;
}

void USSEffectManager::RemoveSequencerAll(UObject* WorldContextObject) {
}

void USSEffectManager::OutputDebugInfo() {
}

bool USSEffectManager::IsHitActorIgnore(AActor* InActor) {
    return false;
}

bool USSEffectManager::IsExistSequencerKey(const FName Key) {
    return false;
}

ASSLevelSequenceActor* USSEffectManager::GetSequencer(UWorld* World, FName Key) {
    return NULL;
}

UKoratRelatedEffectManager* USSEffectManager::GetRelatedEffectManager() {
    return NULL;
}

UMaterialInstanceDynamic* USSEffectManager::GetOutlineMaterialInstance(UWorld* InWorld) {
    return NULL;
}

UKoratDefaultIdClientManager* USSEffectManager::GetEffectIdClientManager() {
    return NULL;
}

UKoratDecalActorManager* USSEffectManager::GetDecalActorManager() {
    return NULL;
}

ULevelSequence* USSEffectManager::GetCharacterFreeTimeline(AActor* OwnerActor, const FKoratFreeTimelineTypeDataList TimeLineType, ULevelSequence*& CancelSequenceData) {
    return NULL;
}

float USSEffectManager::GetBulletTraceTime() {
    return 0.0f;
}

bool USSEffectManager::GetBulletDrawVisual() {
    return false;
}

bool USSEffectManager::GetBulletDrawCollision() {
    return false;
}

bool USSEffectManager::CheckLineTraceKoratObjects(UObject* WorldContextObject, const FVector& InStartPos, const FVector& InEndPos, FHitResult& OutResult) {
    return false;
}

void USSEffectManager::AddSequencer(UWorld* World, const FName Key, ASSLevelSequenceActor* SequencerActor) {
}


