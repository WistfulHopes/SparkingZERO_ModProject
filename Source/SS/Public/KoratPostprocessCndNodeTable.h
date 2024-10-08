#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratPostprocessCndNodeTable.generated.h"

class UKoratPostprocessCndProcessBase;

UCLASS(Blueprintable)
class UKoratPostprocessCndNodeTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKoratPostprocessCndProcessBase*> Table;
    
    UKoratPostprocessCndNodeTable();

};

