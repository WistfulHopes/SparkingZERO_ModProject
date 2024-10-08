#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditEffectDataAsset.generated.h"

class USSDRMEditEffectDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditEffectDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditEffectDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditEffectDataAsset();

};

