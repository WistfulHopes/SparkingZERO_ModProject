#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratPostprocessCndAgent.generated.h"

class UKoratPostprocessCndHandle;

UCLASS(Blueprintable)
class AKoratPostprocessCndAgent : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostprocessCndHandle* Handle;
    
public:
    AKoratPostprocessCndAgent(const FObjectInitializer& ObjectInitializer);

};

