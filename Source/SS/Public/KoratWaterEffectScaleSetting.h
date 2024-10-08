#pragma once
#include "CoreMinimal.h"
#include "KoratWaterEffectScaleSetting.generated.h"

USTRUCT(BlueprintType)
struct FKoratWaterEffectScaleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    SS_API FKoratWaterEffectScaleSetting();
};

