#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractAttributeData.h"
#include "KoratLevelSequenceActorSpawnParameters.h"
#include "KoratOverrideTransformDescription.h"
#include "KoratRebindDescription.h"
#include "KoratSequenceCameraDescription.h"
#include "KoratSequencePlayInfo.h"
#include "KoratSequenceManager.generated.h"

class AActor;
class ASSCharacter;
class ASSLevelSequenceActor;
class ASSLevelSequenceActor2;
class ULevelSequence;

UCLASS(Blueprintable)
class UKoratSequenceManager : public UObject {
    GENERATED_BODY()
public:
    UKoratSequenceManager();

    UFUNCTION(BlueprintCallable)
    static void UpdateOverrideTransformForSequenceActorInteract(ASSLevelSequenceActor* InSequenceActor, const FHitResult& InHitResult, const bool InbApplyNormal);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateOverrideTransformForSequenceActor(ASSLevelSequenceActor* InSequenceActor, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorSyncFreeTimeline(AActor* OwnerActor, ULevelSequence* LevelSequence, const TArray<FKoratSequencePlayInfo>& PlaySeq, const bool bOverrideTransform, const FTransform& OverrideTransform, UObject* SourceObject, const FName ManagedId, const bool bRebindPlayer, const bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForInteractWithSection(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySection, const FHitResult& InHitResult, UObject* InRelatedSourceObject, const bool InbApplyNormal, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForInteract(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const FHitResult& InHitResult, UObject* InRelatedSourceObject, const bool InbApplyNormal, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorAndTransformForInteractWithSection(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const TArray<FKoratSequencePlayInfo>& InPlaySection, const FTransform& InTransform, UObject* InRelatedSourceObject, const FKoratInteractAttributeData& InInteractAttribute, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorAndTransformForInteract(AActor* InOwnerActor, ULevelSequence* InLevelSequence, const FTransform& InTransform, UObject* InRelatedSourceObject, const FKoratInteractAttributeData& InInteractAttribute, const FName InManagedId, const bool InbRebindPlayer, const bool InbAutoPlayStart, const FName InActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnLevelSequenceActorFromParams(AActor* InOwnerActor, ASSCharacter* InRootCharacter, ULevelSequence* InLevelSequence, UObject* SourceObject, const FName InActionDataKey, const FName ManagedId);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor2* SpawnLevelSequenceActor2(const FKoratLevelSequenceActorSpawnParameters& InParams, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnLevelSequenceActor(const FKoratLevelSequenceActorSpawnParameters& InParams, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetupRebindCharacterOld(ASSLevelSequenceActor* InSequenceActor, AActor* InRebindTargetActor, const bool InbEnablePlayerTransformTrack, const bool InbEnablePlayerAnimationTrack);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupKoratOverrideTransformActor(ASSLevelSequenceActor* InSequenceActor, const FKoratOverrideTransformDescription& InSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetupEtcResource(ASSLevelSequenceActor* InSequenceActor, ASSCharacter* InSrcCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool RebindSystemsArray(ASSLevelSequenceActor* InSequenceActor, const TArray<FKoratRebindDescription>& InRebindSettingArray);
    
    UFUNCTION(BlueprintCallable)
    static bool RebindSystems(ASSLevelSequenceActor* InSequenceActor, const FKoratRebindDescription& InRebindSetting);
    
    UFUNCTION(BlueprintCallable)
    static bool RebindCamera(ASSLevelSequenceActor* InSequecnceActor, const FKoratSequenceCameraDescription& InCameraParams, const TMap<FString, ASSCharacter*>& InRebindCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRebindTargetCharacterRegex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRebindCharacterRegex();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static FKoratInteractAtbTypeDataList GetInteractAtbType(UObject* InWorldContextObject, const TEnumAsByte<EPhysicalSurface> InPhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAndSetupRebindActor(ASSLevelSequenceActor* InSequenceActor);
    
};

