#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSAnimEvent.h"
#include "SSAnimEventDispatcherInterface.h"
#include "SSAnimEventDispatcher.generated.h"

class USSAnimNotifyStateEvent;

UCLASS(Blueprintable)
class USSAnimEventDispatcher : public UObject, public ISSAnimEventDispatcherInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USSAnimNotifyStateEvent*, FSSAnimEvent> AnimEventTable;
    
public:
    USSAnimEventDispatcher();


    // Fix for true pure virtual functions not being implemented
};

