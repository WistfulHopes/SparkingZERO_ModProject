#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "SSMythicalOrbData.h"
#include "SSMythicalOrbs.generated.h"

USTRUCT(BlueprintType)
struct FSSMythicalOrbs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragonType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMythicalOrbData> Orbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrbTotalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WishComeTrueCount;
    
    SS_API FSSMythicalOrbs();
};

