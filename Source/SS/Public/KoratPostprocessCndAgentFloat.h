#pragma once
#include "CoreMinimal.h"
#include "EKoratPostprocessCndParamTypeFloat.h"
#include "KoratPostprocessCndAgent.h"
#include "KoratPostprocessCndAgentFloat.generated.h"

UCLASS(Blueprintable)
class AKoratPostprocessCndAgentFloat : public AKoratPostprocessCndAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPostprocessCndParamTypeFloat Type;
    
public:
    AKoratPostprocessCndAgentFloat(const FObjectInitializer& ObjectInitializer);

};

