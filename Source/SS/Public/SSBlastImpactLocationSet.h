#pragma once
#include "CoreMinimal.h"
#include "SSBlastImpactLocationSet.generated.h"

USTRUCT(BlueprintType)
struct FSSBlastImpactLocationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Aerial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Ground1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Ground2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Water;
    
    SS_API FSSBlastImpactLocationSet();
};

