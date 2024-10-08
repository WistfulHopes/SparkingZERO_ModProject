#pragma once
#include "CoreMinimal.h"
#include "SSMpcPriorityActorBase.h"
#include "SSBgGlobalsActor.generated.h"

UCLASS(Blueprintable)
class ASSBgGlobalsActor : public ASSMpcPriorityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ScalarValue;
    
    ASSBgGlobalsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScalarValue(const float InValue);
    
};

