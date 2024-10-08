#pragma once
#include "CoreMinimal.h"
#include "KoratPostprocessCndNodeBase.h"
#include "KoratPostprocessCndNodeFloat.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndNodeFloat : public UKoratPostprocessCndNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    UKoratPostprocessCndNodeFloat();

};

