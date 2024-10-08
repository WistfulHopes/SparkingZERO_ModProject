#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisInstanceConfig.generated.h"

USTRUCT(BlueprintType)
struct FCartesianAxisInstanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLabels;
    
    KANTANCHARTSSLATE_API FCartesianAxisInstanceConfig();
};

