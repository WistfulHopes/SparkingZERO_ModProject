#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KoratExecuteActorInterface.generated.h"

class AActor;
class UMovieSceneSequence;

UINTERFACE()
class UKoratExecuteActorInterface : public UInterface {
    GENERATED_BODY()
};

class IKoratExecuteActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetOwnerSequenceInterface(UMovieSceneSequence* InSequence) PURE_VIRTUAL(SetOwnerSequenceInterface,);
    
    UFUNCTION()
    virtual void SetExecuteActorInterface(AActor* InExecuteActor) PURE_VIRTUAL(SetExecuteActorInterface,);
    
    UFUNCTION()
    virtual void SetEditorExecuteActorInterface(AActor* InEditorExecuteActor) PURE_VIRTUAL(SetEditorExecuteActorInterface,);
    
    UFUNCTION()
    virtual UMovieSceneSequence* GetOnewrSequenceInterface() const PURE_VIRTUAL(GetOnewrSequenceInterface, return NULL;);
    
    UFUNCTION()
    virtual AActor* GetExecuteActorInterface() const PURE_VIRTUAL(GetExecuteActorInterface, return NULL;);
    
};

