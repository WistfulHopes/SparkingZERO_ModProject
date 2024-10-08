#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KoratPoolableActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UKoratPoolableActorInterface : public UInterface {
    GENERATED_BODY()
};

class IKoratPoolableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyReInited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyRecycled();
    
};

