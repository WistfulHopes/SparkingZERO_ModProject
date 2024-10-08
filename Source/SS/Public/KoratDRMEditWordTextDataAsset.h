#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditWordTextDataAsset.generated.h"

class USSDRMEditWordTextDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditWordTextDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditWordTextDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditWordTextDataAsset();

};

