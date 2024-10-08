#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSUiFaderActor.generated.h"

UCLASS(Blueprintable)
class ASSUiFaderActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
public:
    ASSUiFaderActor(const FObjectInitializer& ObjectInitializer);

};

