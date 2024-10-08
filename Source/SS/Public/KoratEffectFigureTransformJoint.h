#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratEffectFigureTransformDataList.h"
#include "KoratExecuteActorInterface.h"
#include "KoratEffectFigureTransformJoint.generated.h"

class ASSLevelSequenceActor;
class UMovieSceneSequence;
class USSLevelSequencePlayer;

UCLASS(Blueprintable, MinimalAPI)
class AKoratEffectFigureTransformJoint : public AActor, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ExecuteActorInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratEffectFigureTransformDataList JointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName EffectsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> EffectTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bManualInputParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseThisTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSLevelSequencePlayer> OwnerSequencePlayer;
    
    AKoratEffectFigureTransformJoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateJointType();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyOwnerLevelSeqauence(ASSLevelSequenceActor* InSequence);
    

    // Fix for true pure virtual functions not being implemented
public:
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

