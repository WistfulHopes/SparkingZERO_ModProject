#pragma once
#include "CoreMinimal.h"
#include "KoratPostprocessCndProcessBase.h"
#include "KoratPostprocessCndProcessInt.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndProcessInt : public UKoratPostprocessCndProcessBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UKoratPostprocessCndProcessInt();

};

