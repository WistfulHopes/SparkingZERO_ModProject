#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditFacialDataAsset.generated.h"

class USSDRMEditFacialDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditFacialDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditFacialDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditFacialDataAsset();

};

