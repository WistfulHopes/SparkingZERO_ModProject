#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSExpDrownOutAcceptActor.generated.h"

UCLASS(Blueprintable)
class ASSExpDrownOutAcceptActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bAccept;
    
public:
    ASSExpDrownOutAcceptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAccept(const bool InFlag);
    
};

