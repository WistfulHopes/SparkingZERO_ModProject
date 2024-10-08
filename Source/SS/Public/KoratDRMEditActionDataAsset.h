#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditActionDataAsset.generated.h"

class USSDRMEditActionDataAsset;

UCLASS(Blueprintable)
class UKoratDRMEditActionDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditActionDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditActionDataAsset();

};

