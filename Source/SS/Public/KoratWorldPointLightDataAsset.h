#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPointLightData.h"
#include "MutualDataAsset.h"
#include "KoratWorldPointLightDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratWorldPointLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterPointLightData> Records;
    
public:
    UKoratWorldPointLightDataAsset();

};

