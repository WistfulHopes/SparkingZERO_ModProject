#pragma once
#include "CoreMinimal.h"
#include "DisplayGaugeSetting.generated.h"

USTRUCT(BlueprintType)
struct FDisplayGaugeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGaugeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGaugeMax;
    
    SS_API FDisplayGaugeSetting();
};

