#pragma once
#include "CoreMinimal.h"
#include "AisacControlInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAisacControlInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AisacControlID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AisacControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AisacControlValueForInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AisacControlValueForOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    CRIWARERUNTIME_API FAisacControlInterpolationSettings();
};

