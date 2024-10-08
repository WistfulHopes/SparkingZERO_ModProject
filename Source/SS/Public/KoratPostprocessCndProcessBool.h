#pragma once
#include "CoreMinimal.h"
#include "KoratPostprocessCndProcessBase.h"
#include "KoratPostprocessCndProcessBool.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndProcessBool : public UKoratPostprocessCndProcessBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
    UKoratPostprocessCndProcessBool();

};

