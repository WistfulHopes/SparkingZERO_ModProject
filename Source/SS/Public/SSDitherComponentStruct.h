#pragma once
#include "CoreMinimal.h"
#include "SSDitherComponentStruct.generated.h"

USTRUCT(BlueprintType)
struct FSSDitherComponentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    SS_API FSSDitherComponentStruct();
};

