#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratPostprocessCndProcessBase.generated.h"

class UKoratPostprocessCndHandle;
class UKoratPostprocessCndNodeBase;

UCLASS(Blueprintable)
class UKoratPostprocessCndProcessBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 createID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPostprocessCndHandle* templateHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKoratPostprocessCndNodeBase*> Table;
    
    UKoratPostprocessCndProcessBase();

};

