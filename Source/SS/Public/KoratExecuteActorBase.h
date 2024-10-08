#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratExecuteActorInterface.h"
#include "KoratExecuteActorBase.generated.h"

class UMovieSceneSequence;

UCLASS(Blueprintable)
class AKoratExecuteActorBase : public AActor, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* ExecuteActor;
    
public:
    AKoratExecuteActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetExecuteActor() const;
    

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

