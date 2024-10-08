#pragma once
#include "CoreMinimal.h"
#include "SSSimpleAimLookatNodeParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSSimpleAimLookatNodeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    SS_API FSSSimpleAimLookatNodeParameter();
};

