#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "SSMythicalOrbData.generated.h"

USTRUCT(BlueprintType)
struct FSSMythicalOrbData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragonType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    SS_API FSSMythicalOrbData();
};

