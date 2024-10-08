#pragma once
#include "CoreMinimal.h"
#include "KantanSeriesStyle.h"
#include "SeriesStyleManualMapping.generated.h"

USTRUCT(BlueprintType)
struct FSeriesStyleManualMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeriesId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanSeriesStyle Style;
    
    KANTANCHARTSUMG_API FSeriesStyleManualMapping();
};

