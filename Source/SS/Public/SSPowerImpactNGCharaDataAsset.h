#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "PowerImpactNGCharacterArray.h"
#include "SSPowerImpactNGCharaDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API USSPowerImpactNGCharaDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FPowerImpactNGCharacterArray> Records;
    
    USSPowerImpactNGCharaDataAsset();

};

