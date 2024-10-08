#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratMapWeatherType.h"
#include "KoratMapWeatherDataAssetRecord.h"
#include "KoratMapWeatherParameterDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratMapWeatherParameterDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> WiatherParametersScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> WiatherParametersVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratMapWeatherType, FKoratMapWeatherDataAssetRecord> TypeParameters;
    
    SS_API FKoratMapWeatherParameterDataAssetRecord();
};

