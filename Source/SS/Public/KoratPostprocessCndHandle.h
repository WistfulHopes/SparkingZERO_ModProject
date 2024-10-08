#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratPostprocessCndHandle.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndHandle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 VariableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ValueIndex;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int16 Handle;
    
    UKoratPostprocessCndHandle();

};

