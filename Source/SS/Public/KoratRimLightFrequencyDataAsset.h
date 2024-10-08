#pragma once
#include "CoreMinimal.h"
#include "KoratRimLightFrequencyData.h"
#include "MutualDataAsset.h"
#include "KoratRimLightFrequencyDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratRimLightFrequencyDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratRimLightFrequencyData> Records;
    
public:
    UKoratRimLightFrequencyDataAsset();

};

