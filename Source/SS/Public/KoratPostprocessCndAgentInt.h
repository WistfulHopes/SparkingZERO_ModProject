#pragma once
#include "CoreMinimal.h"
#include "EKoratPostprocessCndParamTypeInt.h"
#include "KoratPostprocessCndAgent.h"
#include "KoratPostprocessCndAgentInt.generated.h"

UCLASS(Blueprintable)
class AKoratPostprocessCndAgentInt : public AKoratPostprocessCndAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPostprocessCndParamTypeInt Type;
    
public:
    AKoratPostprocessCndAgentInt(const FObjectInitializer& ObjectInitializer);

};

