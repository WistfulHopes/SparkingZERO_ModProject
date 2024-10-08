#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditBlankTextDataAsset.generated.h"

class USSDRMEditBlankTextDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditBlankTextDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditBlankTextDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditBlankTextDataAsset();

};

