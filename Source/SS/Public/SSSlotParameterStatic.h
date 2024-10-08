#pragma once
#include "CoreMinimal.h"
#include "SSSlotParameterStatic.generated.h"

USTRUCT(BlueprintType)
struct FSSSlotParameterStatic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLerpDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidTerrainCamPosWidthScale;
    
    SS_API FSSSlotParameterStatic();
};

