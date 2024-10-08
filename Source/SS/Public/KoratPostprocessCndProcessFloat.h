#pragma once
#include "CoreMinimal.h"
#include "KoratPostprocessCndProcessBase.h"
#include "KoratPostprocessCndProcessFloat.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndProcessFloat : public UKoratPostprocessCndProcessBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UKoratPostprocessCndProcessFloat();

};

