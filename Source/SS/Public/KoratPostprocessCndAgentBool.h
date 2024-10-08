#pragma once
#include "CoreMinimal.h"
#include "EKoratPostprocessCndParamTypeBool.h"
#include "KoratPostprocessCndAgent.h"
#include "KoratPostprocessCndAgentBool.generated.h"

UCLASS(Blueprintable)
class AKoratPostprocessCndAgentBool : public AKoratPostprocessCndAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPostprocessCndParamTypeBool Type;
    
public:
    AKoratPostprocessCndAgentBool(const FObjectInitializer& ObjectInitializer);

};

