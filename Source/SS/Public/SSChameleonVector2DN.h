#pragma once
#include "CoreMinimal.h"
#include "SSChameleonVector2DN.generated.h"

USTRUCT(BlueprintType)
struct FSSChameleonVector2DN {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Y;
    
    SS_API FSSChameleonVector2DN();
};

