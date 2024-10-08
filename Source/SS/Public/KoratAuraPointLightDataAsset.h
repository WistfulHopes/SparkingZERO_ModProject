#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratAuraPointLightDataAsset.generated.h"

class USSAuraPointLightDataAsset;

UCLASS(Blueprintable)
class UKoratAuraPointLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSAuraPointLightDataAsset*> PtrRecords;
    
public:
    UKoratAuraPointLightDataAsset();

};

