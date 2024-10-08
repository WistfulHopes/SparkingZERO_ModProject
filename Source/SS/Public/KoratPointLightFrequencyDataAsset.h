#pragma once
#include "CoreMinimal.h"
#include "KoratPointLightFrequencyDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratPointLightFrequencyDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratPointLightFrequencyDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratPointLightFrequencyDataAssetRecord> Records;
    
public:
    UKoratPointLightFrequencyDataAsset();

};

