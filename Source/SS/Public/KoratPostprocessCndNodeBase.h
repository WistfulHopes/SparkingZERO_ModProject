#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratPostprocessCndNodeBase.generated.h"

UCLASS(Blueprintable)
class UKoratPostprocessCndNodeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 createID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int16 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UKoratPostprocessCndNodeBase();

};

