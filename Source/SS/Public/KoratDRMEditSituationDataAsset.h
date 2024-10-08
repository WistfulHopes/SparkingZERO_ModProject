#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditSituationDataAsset.generated.h"

class USSDRMEditSituationDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditSituationDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditSituationDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditSituationDataAsset();

};

