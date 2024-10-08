#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratMapWeatherParameterDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratMapWeatherDataAsset.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UKoratMapWeatherDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MasterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ImmutableParameterScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> ImmutableParameterVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratMapWeatherParameterDataAssetRecord> Records;
    
public:
    UKoratMapWeatherDataAsset();

    UFUNCTION(BlueprintCallable)
    void SetupKoratData();
    
};

