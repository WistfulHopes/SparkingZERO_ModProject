#pragma once
#include "CoreMinimal.h"
#include "KoratPostprocessCndNodeBase.h"
#include "KoratPostprocessCndNodeInt.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndNodeInt : public UKoratPostprocessCndNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UKoratPostprocessCndNodeInt();

};

