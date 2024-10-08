#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratFreeTimelineInstance.h"
#include "KoratFreeTimelineInstanceData.generated.h"

UCLASS(Blueprintable)
class UKoratFreeTimelineInstanceData : public UObject, public IKoratFreeTimelineInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ClassObjects;
    
public:
    UKoratFreeTimelineInstanceData();


    // Fix for true pure virtual functions not being implemented
};

