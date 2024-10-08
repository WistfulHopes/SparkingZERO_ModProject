#pragma once
#include "CoreMinimal.h"
#include "KoratPoolableActorInterface.h"
#include "SSLevelSequenceActor.h"
#include "SSLevelSequenceActor2.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ASSLevelSequenceActor2 : public ASSLevelSequenceActor, public IKoratPoolableActorInterface {
    GENERATED_BODY()
public:
    ASSLevelSequenceActor2(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

