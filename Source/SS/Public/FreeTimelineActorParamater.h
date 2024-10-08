#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratFreeTimelineActorRequest.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratFreeTimelineAtbColliderParam.h"
#include "KoratFreeTimelineAtbSpaceParam.h"
#include "KoratFreeTimelineLineTraceParam.h"
#include "KoratInteractAttributeData.h"
#include "FreeTimelineActorParamater.generated.h"

class AActor;
class AKoratFreeTimelineActor;
class ASSCharacter;

USTRUCT(BlueprintType)
struct FFreeTimelineActorParamater {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* ActionOwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AKoratFreeTimelineActor> SpawnFreeTimeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineLineTraceParam LineTraceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbSpaceParam SpaceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbColliderParam ColliderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineActorRequest RequestPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReferenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName OptionActionDataKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData OptionCharEffectColorDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail CharacterEffectMutipleColorDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratInteractAttributeData EffectInteractData;
    
    SS_API FFreeTimelineActorParamater();
};

