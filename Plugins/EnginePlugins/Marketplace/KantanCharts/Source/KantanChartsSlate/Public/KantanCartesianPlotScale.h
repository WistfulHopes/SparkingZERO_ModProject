#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CartesianAxisRange.h"
#include "ECartesianScalingType.h"
#include "KantanCartesianPlotScale.generated.h"

USTRUCT(BlueprintType)
struct FKantanCartesianPlotScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECartesianScalingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FocalCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisRange RangeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisRange RangeY;
    
    KANTANCHARTSSLATE_API FKantanCartesianPlotScale();
};

