#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratAttachRotRule.h"
#include "EKoratFreeTimelineAtbType.h"
#include "EKoratFreeTimelinePlayType.h"
#include "EKoratFreeTimelineType.h"
#include "KoratExecuteActorInterface.h"
#include "KoratIdManagedClient.h"
#include "KoratFreeTimelineSpawn.generated.h"

class ASSLevelSequenceActor;
class UKoratDefaultIdData;
class UMovieSceneSequence;
class USSLevelSequencePlayer;

UCLASS(Blueprintable)
class SS_API AKoratFreeTimelineSpawn : public AActor, public IKoratIdManagedClient, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineType TimeLineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineAtbType TimelineAtbType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelinePlayType TimelinePlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bRebind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideTransformAtSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratAttachRotRule SpawnRotateRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bFollowTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseMyTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnablePlayOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdData* IdDataInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelinePlayType PreTimelinePlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> SequenceActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSLevelSequencePlayer> OwnerPlayer;
    
public:
    AKoratFreeTimelineSpawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(AActor* InActor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetOwnerSequenceInterface(UMovieSceneSequence* InSequence) override PURE_VIRTUAL(SetOwnerSequenceInterface,);
    
    UFUNCTION()
    void SetExecuteActorInterface(AActor* InExecuteActor) override PURE_VIRTUAL(SetExecuteActorInterface,);
    
    UFUNCTION()
    void SetEditorExecuteActorInterface(AActor* InEditorExecuteActor) override PURE_VIRTUAL(SetEditorExecuteActorInterface,);
    
    UFUNCTION()
    UMovieSceneSequence* GetOnewrSequenceInterface() const override PURE_VIRTUAL(GetOnewrSequenceInterface, return NULL;);
    
    UFUNCTION()
    AActor* GetExecuteActorInterface() const override PURE_VIRTUAL(GetExecuteActorInterface, return NULL;);
    
};

