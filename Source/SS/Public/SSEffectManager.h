#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EKoratFreeTimelineAtbBrkType.h"
#include "EKoratFreeTimelineAtbType.h"
#include "EKoratFreeTimelineType.h"
#include "KoratCharacterPointLightData.h"
#include "KoratFreeTimelineTypeDataList.h"
#include "KoratHitEffectAfterHitStop.h"
#include "KoratSequencePlayInfo.h"
#include "SequenceActorSpawnParameters.h"
#include "SSEffectManager.generated.h"

class AActor;
class ASSCharacter;
class ASSLevelSequenceActor;
class UKoratDecalActorManager;
class UKoratDefaultIdClientManager;
class UKoratRelatedEffectManager;
class ULevelSequence;
class UMaterialInstanceDynamic;
class UWorld;

UCLASS(Blueprintable)
class USSEffectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdClientManager* EffectIdClientManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratRelatedEffectManager* RelatedEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratDecalActorManager* DecalActorManager;
    
public:
    USSEffectManager();

    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorWithSetEffectColor(FSequenceActorSpawnParameters& InParameters, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorSyncMontage(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorSyncFreeTimeline(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, const bool bOverrideTransform, const FTransform& OverrideTransform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineDirectWithWorldPointLight(AActor* BaseActor, ULevelSequence* LevelSequence, bool bIsWorldPointLightValid, const FKoratCharacterPointLightData& WorldPointLight, const FTransform Transform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineDirect(AActor* BaseActor, ULevelSequence* LevelSequence, const FTransform Transform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineAtbBrk(AActor* OwnerActor, const EKoratFreeTimelineAtbBrkType TimeLineType, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineAtb(AActor* OwnerActor, const EKoratFreeTimelineAtbType TimeLineType, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimeline(AActor* OwnerActor, const EKoratFreeTimelineType TimeLineType, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const bool bLooped, const bool bPauseAtEnd, const FName ManagedId, const int32 StartFrame, const bool bRebindPlayer, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForDemo(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, UObject* SourceObject, const FName ManagedId, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorByHitEffectAfterHitStop(const FKoratHitEffectAfterHitStop& HitEffectAfterHitStop, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActor(const FSequenceActorSpawnParameters& InParameters, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibleCharacterEffects(ASSCharacter* InChara, const bool bDisplayEnable, const bool bEnableTick);
    
    UFUNCTION(BlueprintCallable)
    static void SetOwnerActor(AActor* OwnerActor, AActor* EffectActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableTickCharacterEffects(ASSCharacter* InChara, const bool bEnableTick);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterOutlineFillRate(AActor* InChara, const float InRate, const bool InbOutlineEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterOutlineFill(AActor* InChara, const bool InbEnable, const bool InbOutlineEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterOutline(AActor* InChara, const bool bEnable, const FName InTypeName);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* SelectCharacterFreeTimelineAtbBrk(AActor* OwnerActor, const EKoratFreeTimelineAtbBrkType TimeLineType, const FName AtbName);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* SelectCharacterFreeTimelineAtb(AActor* OwnerActor, const EKoratFreeTimelineAtbType TimeLineType, const FName AtbName);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* SelectCharacterFreeTimeline(AActor* OwnerActor, const EKoratFreeTimelineType TimeLineType, ULevelSequence*& CancelSequenceData);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveSequencerKey(const FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveSequencerAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void OutputDebugInfo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHitActorIgnore(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistSequencerKey(const FName Key);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* GetSequencer(UWorld* World, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static UKoratRelatedEffectManager* GetRelatedEffectManager();
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetOutlineMaterialInstance(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    static UKoratDefaultIdClientManager* GetEffectIdClientManager();
    
    UFUNCTION(BlueprintCallable)
    static UKoratDecalActorManager* GetDecalActorManager();
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* GetCharacterFreeTimeline(AActor* OwnerActor, const FKoratFreeTimelineTypeDataList TimeLineType, ULevelSequence*& CancelSequenceData);
    
    UFUNCTION(BlueprintCallable)
    static float GetBulletTraceTime();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBulletDrawVisual();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBulletDrawCollision();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckLineTraceKoratObjects(UObject* WorldContextObject, const FVector& InStartPos, const FVector& InEndPos, FHitResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void AddSequencer(UWorld* World, const FName Key, ASSLevelSequenceActor* SequencerActor);
    
};

