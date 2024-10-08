#pragma once
#include "CoreMinimal.h"
#include "SSChameleonVector3DN.generated.h"

USTRUCT(BlueprintType)
struct FSSChameleonVector3DN {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Z;
    
    SS_API FSSChameleonVector3DN();
};

