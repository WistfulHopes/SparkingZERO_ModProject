#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisInstanceConfig.h"
#include "CartesianAxisConfig.generated.h"

USTRUCT(BlueprintType)
struct FCartesianAxisConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValueDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisInstanceConfig LeftBottomAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisInstanceConfig RightTopAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisInstanceConfig FloatingAxis;
    
    KANTANCHARTSSLATE_API FCartesianAxisConfig();
};

