#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratAuraRimLightDataAsset.generated.h"

class USSAuraRimLightDataAsset;

UCLASS(Blueprintable)
class UKoratAuraRimLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSAuraRimLightDataAsset*> PtrRecords;
    
public:
    UKoratAuraRimLightDataAsset();

};

