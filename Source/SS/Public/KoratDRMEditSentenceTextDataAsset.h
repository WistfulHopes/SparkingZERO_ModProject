#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditSentenceTextDataAsset.generated.h"

class USSDRMEditSentenceTextDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditSentenceTextDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditSentenceTextDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditSentenceTextDataAsset();

};

