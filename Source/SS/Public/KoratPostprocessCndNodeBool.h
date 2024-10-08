#pragma once
#include "CoreMinimal.h"
#include "KoratPostprocessCndNodeBase.h"
#include "KoratPostprocessCndNodeBool.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndNodeBool : public UKoratPostprocessCndNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UKoratPostprocessCndNodeBool();

};

