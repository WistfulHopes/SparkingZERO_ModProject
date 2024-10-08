#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSBulletBeamViewOverrideScaleType.h"
#include "ESSBulletLocatorPointType.h"
#include "KoratExecuteActorInterface.h"
#include "SSBulletLocator.generated.h"

class UMovieSceneSequence;

UCLASS(Blueprintable)
class ASSBulletLocator : public AActor, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSBulletBeamViewOverrideScaleType OverrideScaleType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSBulletLocatorPointType pointType;
    
public:
    ASSBulletLocator(const FObjectInitializer& ObjectInitializer);

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

