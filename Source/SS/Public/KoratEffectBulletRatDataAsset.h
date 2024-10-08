#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatDataAssetRecord.h"
#include "KoratEffectBulletRatDecalSpawnNumFactor.h"
#include "KoratFreeTimelineLineTraceParam.h"
#include "MutualDataAsset.h"
#include "KoratEffectBulletRatDataAsset.generated.h"

class AKoratFreeTimelineActor;
class ASSBulletRatSpawnActor;
class ULevelSequence;

UCLASS(Blueprintable)
class UKoratEffectBulletRatDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AKoratFreeTimelineActor> FreeTimelineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSBulletRatSpawnActor> BulletRatSpawnActorDecalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSBulletRatSpawnActor> BulletRatSpawnActorKnockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineLineTraceParam LineTraceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatDecalSpawnNumFactor DecalSpawnNumFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectBulletRatDataAssetRecord> Records;
    
public:
    UKoratEffectBulletRatDataAsset();

};

