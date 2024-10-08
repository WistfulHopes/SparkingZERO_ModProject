#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditSocketDataAsset.generated.h"

class USSDRMEditSocketDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditSocketDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditSocketDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditSocketDataAsset();

};

