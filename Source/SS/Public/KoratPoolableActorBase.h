#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratPoolableActorInterface.h"
#include "KoratPoolableActorBase.generated.h"

UCLASS(Blueprintable)
class AKoratPoolableActorBase : public AActor, public IKoratPoolableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsePoolActor;
    
public:
    AKoratPoolableActorBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

