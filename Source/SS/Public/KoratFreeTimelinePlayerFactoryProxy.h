#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratFreeTimelinePlayerFactoryProxy.generated.h"

class UKoratFreeTimelinePlayerFactoryBase;

UCLASS(Blueprintable)
class UKoratFreeTimelinePlayerFactoryProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKoratFreeTimelinePlayerFactoryBase*> PlayerFactories;
    
public:
    UKoratFreeTimelinePlayerFactoryProxy();

};

