#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratMapWeatherDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratMapWeatherDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> WiatherSunshineParameterScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> WiatherSunshineParameterVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> WiatherShadeParameterScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> WiatherShadeParameterVector;
    
    SS_API FKoratMapWeatherDataAssetRecord();
};

