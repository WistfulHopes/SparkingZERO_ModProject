#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditLayerDataAsset.generated.h"

class USSDRMEditLayerDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditLayerDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditLayerDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditLayerDataAsset();

};

